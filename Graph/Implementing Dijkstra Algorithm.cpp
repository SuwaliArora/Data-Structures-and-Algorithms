class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> dis(V+1,INT_MAX);
        // min heap
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq ;
        dis[S]=0;
        pq.push(make_pair(0,S));  // first is weight, second is source
        while(!pq.empty()){
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it: adj[node]){
               if(dist+ it[1] < dis[it[0]]){
                   dis[it[0]]=dist+ it[1];
                   pq.push(make_pair(dis[it[0]],it[0]));
               }   
            }
        }
        return dis;
    }
};
