#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
 
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
            if (!containsvertex(key))
            {
                auto it = std::find(road[key].begin(),road[key].end(),value);

                if (it == road[key].end())
                {
                    return false;
                }
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

};

int main(){

}

