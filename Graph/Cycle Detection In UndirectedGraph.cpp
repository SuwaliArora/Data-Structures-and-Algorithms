#include<unordered_map>
#include<queue>
#include<list>

// to check for source node of components
bool iscyclicDfs(int node,int parent, unordered_map<int, bool>& visited,  unordered_map<int,list<int>>& adjlist){
  
    visited[node]=true; 
        for(auto neighbour: adjlist[node]){
            
           if(!visited[neighbour]){
                bool cycle=iscyclicDfs(neighbour,node,visited,adjlist);
                if(cycle) return true;
            }
            else if(visited[neighbour]==true && neighbour!=parent){
                // cycle present
                return true;
            }
        }
    
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
     // create adjacency list
    unordered_map<int,list<int>> adjlist;
    for(int i=0;i<m;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    
    // to store if node is already visited or not
    unordered_map<int, bool> visited; 
    
     // to handle disconnected components
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bool ans=iscyclicDfs(i,-1,visited,adjlist);
            if(ans==1) return "Yes";
        }
    } 
    return "No";
}
