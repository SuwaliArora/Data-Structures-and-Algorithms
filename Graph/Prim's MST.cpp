#include<unordered_map>
#include<list>
#include<limits.h>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // create adjacency list
    unordered_map<int,list<pair<int,int>>> adjlist;
    for(int i=0;i<g.size();i++){
        int u=g[i].first.first; // node 1
        int v=g[i].first.second; // node 2
        int w=g[i].second; // weight between nodes
        
        adjlist[u].push_back(make_pair(v,w));  // node from u to v
        adjlist[v].push_back(make_pair(u,w)); // node from v to u
    }
    
     //  creation of 3 data structures 
    vector<int> key(n+1);  // index is representing node
    vector<bool> mst(n+1); // to check if node is present in mst or not
    vector<int> parent(n+1); // to track parent of each node
    for(int i=0;i<=n;i++){
        key[i]=INT_MAX;
        parent[i]=-1;
        mst[i]=false;
    }
    
    // let's start the algo
    key[1]=0;
    parent[1]=-1;
    for(int i=1;i<n;i++){
        int mini=INT_MAX; // mini defines the minimum weight between nodes
        int u;
        //step-3 find the min value node
        
        for(int v=1;v<=n;v++){
            if(mst[v]==false && key[v]<mini){
                u=v;
                mini=key[v];
            }
        }// here time complexity is n^2
        
        // step-2 mark the node as true
        mst[u]=true;
        
        // step-3  check its adjacent nodes
        for(auto it: adjlist[u]){
            int v=it.first;
            int w=it.second;
            if(mst[v]==false && w<key[v]){
                parent[v]=u;
                key[v]=w;
            }
        }
    }
    vector<pair<pair<int, int>, int>> result;
    for(int i=2;i<=n;i++){
        result.push_back({{parent[i],i},key[i]});
    }
    return result;
}
