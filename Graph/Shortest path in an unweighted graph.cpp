#include<unordered_map>
#include<queue>
#include<list>

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// create adjacency list
    unordered_map<int,list<int>> adjlist;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first; // nodes are from 1
        int v=edges[i].second; 
        
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
	
    // do bfs
     // to store if node is already visited or not
    unordered_map<int, bool> visited; 
    // to keep track of parent of each node
    unordered_map<int,int> parent;
    
    queue<int> q;
    q.push(s);
    visited[s]=true;
    parent[s]= -1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        
        for(auto neighbour: adjlist[front]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=1;
                parent[neighbour]=front;
            }
        }
    }
    
    // prepare shortest path
    vector<int> ans;
    int currentnode=t; // mark current node as destination
    ans.push_back(t);
    
    while(currentnode!=s){
        currentnode =parent[currentnode];
        ans.push_back(currentnode);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
