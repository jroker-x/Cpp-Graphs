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
                   std::cout << check << ' ';
                   
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

        

};

int main(){

    Graph graph;

    graph.addedge('A','B');
    graph.addedge('B','C');
    graph.addedge('C','D');
    
   graph.bfs('A');



}



