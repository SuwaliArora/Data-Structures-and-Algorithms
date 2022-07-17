#include<unordered_map>
#include<list>
void dfs(int node,int parent,int &timer,vector<int> &disc,vector<int> &low,vector<vector<int>> &result,unordered_map<int,list<int>> &adjlist,unordered_map<int,bool> &vis){
    
    vis[node]=true;
    disc[node]=low[node]=timer++;
    
    for(auto nbr:adjlist[node]){
        if(nbr==parent)
            continue;
        if(!vis[nbr]){
            dfs(nbr,node,timer,disc,low,result,adjlist,vis);
            // while returning
            low[node]=min(low[node],low[nbr]);
            // check if node is the bridge or node
            if(low[nbr]>disc[node]){
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(nbr);
                result.push_back(ans);
            }
        }
        else{
            // backedge
            // update low of node
            low[node]=min(low[node],disc[nbr]);
        }
    }
}
vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
      // create adjacency list
    unordered_map<int,list<int>> adjlist;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0]; // node 1
        int v=edges[i][1]; // node 2
        
        adjlist[u].push_back(v);  // node from u to v
        adjlist[v].push_back(u); // node from v to u
    }
     
    int timer=0;
    vector<int> disc(v); // to find time at which node is visited
    vector<int> low(v); // to track earliest possible time
    int parent=-1;
    unordered_map<int,bool> vis; // to track visited node
    
    for(int i=0;i<v;i++){
        disc[i]=-1;
        low[i]=-1;
    }
    vector<vector<int>> result;
    // dfs
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,parent,timer,disc,low,result,adjlist,vis);
        }
    }
    return result;
}
