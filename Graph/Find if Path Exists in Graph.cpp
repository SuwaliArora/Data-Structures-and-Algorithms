class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        vector<vector<int>> adj(n);
        int e=edges.size();
        // creating adjacency list
        for(int i=0;i<e;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        // bfs traversal
        queue<int> q;
        q.push(s);
        vector<bool> v(n,false);
        while(!q.empty()){
            if(v[d]==true) return true;
            int node=q.front();
            q.pop();
            v[node]=true;
            for(int it: adj[node]){
                if(!v[it]){
                    q.push(it);
                    v[it]=true;
                }
            }
        }
        return v[d];
    }
};
