void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int,list<int>> &adjlist,vector<int> &component){
    component.push_back(node);
    visited[node] =true;
    
    // for every connected node ,recursive call
    for(auto i:adjlist[node]){
        if(!visited[i]){
            dfs(i,visited,adjlist,component);
        }
    
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // prepare adjacency list
    unordered_map<int,list<int>> adjlist;
    
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
     vector<vector<int>> ans;  // to store DFS
    unordered_map<int, bool> visited; // to store if node is already visited or not
    
    // traverse all components of a graph
    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i,visited,adjlist,component);
            ans.push_back(component);
        }
    } 
    return ans;
}
