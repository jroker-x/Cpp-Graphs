#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
#include <queue>


struct Edge
{
    char destination;
    int weight;
};

struct Node{

    char vertex;
    int dist;

   

    bool operator<(Node& other)const {

        return dist < other.dist;

    }
};

template<typename T>
class Heap{

    private: 
        std::vector<T> data;

    public:
    
        void insert(T value){
            data.push_back(value);
            heapifyup();

        }

        void heapifyup(){
            int current = data.size() - 1;
            int test = 0;

            while (current > 0)
            {
                int parent = (current - 1) / 2;
                if  (data[current] < data[parent])
                {
                  std::swap(data[parent],data[current]);
                  current = parent;
                }
                else{
                    break;
                }
                
            }

        }

        T extractMin(){

            T min = data[0];

            std::swap(data[0], data.back());
            data.pop_back();
            heapifydown(0);
            return min;

        }

        void heapifydown(int value){

            int current = value;
            
            while (true)
            {
            int left = 2*current +1;
            int right = 2*current +2;
            int smallest = current;

            if (left < data.size() && data[left] < data[smallest])
            {
                smallest = left;
            }

            if (right < data.size() && data[right] < data[smallest])
            {
                smallest = right;
            }

            if (smallest == current)
            {
               break;
            }

            std::swap(data[current],data[smallest]);
            current = smallest;
        
        
            }

        }

        T peek(){

            return data.back();

        }

        size_t size(){

            return data.size();
        }
        
        bool empty(){

            return data.empty();

        }
        
        void pop(){

           extractMin();

        }

        T top(){  
            return data[0];
        }

        
        
};
 
class Graph{

    private: 
        std::unordered_map<char,std::vector<Edge>> road;
        std::unordered_map<char,char> prev;
    public:

        void addedge(char key,char value,int weight){
            
            if (contains(key,value) == false)
            {
                Edge first;
                first.destination = value;
                first.weight = weight;
                Edge second;
                second.destination = key;
                second.weight = weight;
                road[key].push_back(first);
                road[value].push_back(second);
            }
                
        }

        bool contains(char key,char value){
            if (containsvertex(key))
            {
                auto it = std::find_if(road[key].begin(),road[key].end(),[value](const Edge& item){
                    return item.destination == value;
                });

                if (it == road[key].end())
                {
                    return false;
                }
            }
            else{
                return false;
            }
            
            return true;
        }

        void addvertex(char vert){
            if (!containsvertex(vert))
            {
                road[vert];
            }
            
        }

        
        bool containsvertex(char key){
            return road.find(key) != road.end();
        }

        void dfs(char check){

            std::unordered_set<char> visited;
            

            dfsH(check,visited);    
            }

        void dfsH(char check, std::unordered_set<char>& v){

                if (v.find(check) != v.end())
                   {
                    return;
                   }
                   v.insert(check);
                  
                   
                for (auto const& neighbour : road[check])
                {
                   
                   dfsH(neighbour.destination,v);
                
                }
                
            } 

        void bfs(char check){

            std::queue<char> q;
            std::unordered_set<char> visited;
            q.push(check);
            visited.insert(check);
           
            
            while (!q.empty())
            { 
                char current = q.front();
                q.pop();    
                std::cout<< current<< ' ';
                for (auto const& nei : road[current])
                { 
                    
                    if (visited.find(nei.destination) == visited.end())
                    {
                        visited.insert(nei.destination);
                        q.push(nei.destination);
                        
                    }
                   
                }
                current = q.front();
                    
            }
            
        }

        int cc(){

            std::unordered_set<char> visited;
            int components = 0;
            for (auto const& vert : road)
            {
                if (visited.find(vert.first) == visited.end())
                {
                    dfsH(vert.first,visited);
                    components++;
                }
                
            }
            return components;
        }

        void dfsPrintComponent(char current,std::unordered_set<char>& visited){

            if (visited.find(current) != visited.end())
                   {
                    return;
                   }
                   visited.insert(current);
                   std::cout << current;
                  
                   
                for (auto const& neighbour : road[current])
                {
                   
                   dfsPrintComponent(neighbour.destination,visited);
                
                }
            

        }

        void printcomponents(){

            std::unordered_set<char> visited;
            int count =1;
            for (auto const& vert : road)
            {
                if (visited.find(vert.first) == visited.end())
                {
                   std::cout << "COMPONENT " << count++ << ':';
                   dfsPrintComponent(vert.first,visited);
                    std::cout << '\n';
                }
                
            }
            
        }

        bool dfscycle(char son, char parent, std::unordered_set<char>& visited){

             visited.insert(son);
            
            for (auto const& neighbour : road[son])
                {
                
                   if (neighbour.destination == parent)
                   {
                        continue;
                   }
                   else if (visited.find(neighbour.destination) != visited.end() && neighbour.destination != parent)
                   {
                        return true;
                   }
                   if (dfscycle(neighbour.destination,son,visited))
                   {
                        return true;
                   }
                
                }
            
                return false;
        }

        bool hasCycle(char son, char parent){

            std::unordered_set<char> visited;
            
            for (auto const& vert : road)
            {
                if (visited.find(vert.first) == visited.end())
                {
                    if (dfscycle(son,parent,visited))
                    {
                        return true;
                    }
            
                    
                }
                
            }
            return false;
            
        }

        std::unordered_map<char,int> dijkstra(char start){

            Heap<Node> heap;
            std::unordered_map<char,int> distance;
            

            for (auto const& vert : road)
            {
                distance[vert.first] = INT_MAX;   
            }

            distance[start] = 0;
            heap.insert({start,0});
            
            while (!heap.empty())
            {
                Node current = heap.top(); 
                heap.pop();
                if (current.dist > distance[current.vertex])
                {
                    continue;
                }
                for (const auto& n : road[current.vertex])
                    {
                        int newdist = n.weight + current.dist;
                        if (newdist < distance[n.destination])
                        {
                            distance[n.destination] = newdist;
                            heap.insert({n.destination,newdist});
                            prev[n.destination] = current.vertex;
                        }
                    
                        
                    }
            } 
           

            return distance;
        }

        std::vector<char> shortestpath(char start, char end){

            char current = end;
            std::vector<char> recon;
            while (start != current)
            {
                recon.push_back(current);
                current = prev[current];
            }
            
            recon.push_back(start);
            std::reverse(recon.begin(), recon.end());
            return recon;

        }

        
      

};

int main(){

    Graph graph;
    graph.addedge('A','B',10);
    graph.addedge('A','C',2);
    graph.addedge('C','B',3);
    graph.addedge('B','D',1);
    graph.addedge('C','D',8);

    auto dist = graph.dijkstra('A');

    for (auto const& v : dist)
    {
        std::cout << v.first << " : " << v.second << '\n';
    }
    
    auto path = graph.shortestpath('A', 'B');
    
    for (size_t i = 0; i < path.size(); i++)
    {
        std::cout << path[i] << "->";
    }
    
    
    

}



 
