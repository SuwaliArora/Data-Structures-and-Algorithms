#include<unordered_map>
#include<list>
#include<set>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // create adjacency list
    unordered_map<int,list<pair<int,int>>> adjlist;
    for(int i=0;i<edges;i++){
        int u=vec[i][0]; // node 1
        int v=vec[i][1]; // node 2
        int w=vec[i][2]; // weight between nodes
        
        adjlist[u].push_back(make_pair(v,w));  // node from u to v
        adjlist[v].push_back(make_pair(u,w)); // node from v to u
    }
    //  creation of distance array with infinite value initiallay
    vector<int> dis(vertices);
    for(int i=0;i<vertices;i++){
        dis[i]=INT_MAX;
    }
    
    // creation of set on basis (distance,node)
    set<pair<int,int>> st;
    
    // initialize distance and set with source node
    dis[source]=0;
    st.insert(make_pair(0,source));
    
    while(!st.empty()){
        // fetch top record
        auto top=*(st.begin());
         int nodedistance=top.first;
        int topnode=top.second;
        
        // remove top recored now
        st.erase(st.begin());
        
        // traverse on neighbours
        for(auto neighbour: adjlist[topnode]){
            // find minimum distance
            if(nodedistance+ neighbour.second < dis[neighbour.first]){
                auto record=st.find(make_pair(dis[neighbour.first],neighbour.first));
                // if record found, then erase it
                if(record!=st.end()){
                    st.erase(record);
                }
                
                // update distance
                dis[neighbour.first] = nodedistance+ neighbour.second;
                // record push in set
                st.insert(make_pair(dis[neighbour.first],neighbour.first));
            }
            
        }
    }
    return dis;
}
