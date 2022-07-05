//Kahn's Algorithm

#include<unordered_map>
#include<queue>
#include<list>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
   // create adjacency list
    unordered_map<int,list<int>> adjlist;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1]; 
        adjlist[u].push_back(v);
    }
    
    // find all indegrees
    vector<int> indegree(v);
    for(auto i:adjlist){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    
    // add elements with 0 indegree in tha queue
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0)
            q.push(i);
    }
    
    // do bfs
    vector<int> ans;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        
        // store answer
        ans.push_back(front);
        
        // neighbour indegree update
        for(auto neighbour: adjlist[front]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0)
                q.push(neighbour);
            
        }
    }
    return ans;    
}
