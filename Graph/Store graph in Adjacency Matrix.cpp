#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    // declare adjacency matrix
    int adj[n+1][n+1];
    
    // take edges as input
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        
        // mark 1 to denote edges between nodes
        adj[u][v]=1;
        adj[v][u]=1;
    }

    return 0;
}
