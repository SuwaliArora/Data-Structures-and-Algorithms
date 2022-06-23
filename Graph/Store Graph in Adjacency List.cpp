#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    // declare adjacency list
    vector<int> adj[n+1];
    
    // take edges as input
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        
        // mark 1 to denote edges between nodes
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}
