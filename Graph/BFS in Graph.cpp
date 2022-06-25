#include<unordered_map>
#include<queue>
#include<list>
#include<set>
// function to prepare adjacency list
void preparelist(unordered_map<int,set<int>> &adjlist, vector<pair<int, int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        
        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}

void bfs(unordered_map<int,set<int>> &adjlist,unordered_map<int, bool> &visited, vector<int> &ans, int node){
    queue<int> q;
    q.push(node);
    visited[node] =1;
    
    while(!q.empty()){
        int frontnode=q.front();
        q.pop();
        
        // store front node to ans
        ans.push_back(frontnode);
        
        // traverse all neighbors of front node
        for(auto i: adjlist[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // for adjacency list
    unordered_map<int,set<int>> adjlist;
    vector<int> ans;  // to store BFS
    unordered_map<int, bool> visited; // to store if node is already visited or not
    
    preparelist(adjlist,edges);
    
    // traverse all components of a graph
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adjlist,visited,ans,i);
        }
    }  
    return ans;
}
