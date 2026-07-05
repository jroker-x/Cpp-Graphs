#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
#include <queue>
 
class Graph{

    private: 
        std::unordered_map<char,std::vector<char>> road;
    public:

        void addedge(char key,char value){
            
            if (contains(key,value) == false)
            {
                road[key].push_back(value);
                road[value].push_back(key);
            }
                
        }

        bool contains(char key,char value){
            if (containsvertex(key))
            {
                auto it = std::find(road[key].begin(),road[key].end(),value);

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
                   
                   dfsH(neighbour,v);
                
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
                    
                    if (visited.find(nei) == visited.end())
                    {
                        visited.insert(nei);
                        q.push(nei);
                        
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
                   
                   dfsPrintComponent(neighbour,visited);
                
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
                
                   if (neighbour == parent)
                   {
                        continue;
                   }
                   else if (visited.find(neighbour) != visited.end() && neighbour != parent)
                   {
                        return true;
                   }
                   if (dfscycle(neighbour,son,visited))
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
      

};

int main(){

    Graph g;

    g.addedge('A', 'B');
    g.addedge('B', 'C');
    g.addedge('C', 'D');
    
    g.printcomponents();
    std::cout << g.hasCycle('B','A');
    

}



 
