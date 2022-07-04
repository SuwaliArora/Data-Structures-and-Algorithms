#include<unordered_map>
#include<stack>
#include<list>

void toposort(int node,vector<bool> &visited,
    stack<int> &s,unordered_map<int,list<int>> &adjlist){
         visited[node]=1; 
        for(auto neighbour: adjlist[node]){ 
           if(!visited[neighbour]){
                toposort(neighbour,visited,s,adjlist);  
            }
        }
             s.push(node);
     
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
     // create adjacency list
    unordered_map<int,list<int>> adjlist;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        
        adjlist[u].push_back(v);
    }   
        // to store if node is already visited or not
    vector<bool> visited(v); 
    stack<int> s;
     // call dfs topological sort util function for all components
    for(int i=0;i<v;i++){
        if(!visited[i]){
            toposort(i,visited,s,adjlist);
        }
    } 
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
    return ans;
}
