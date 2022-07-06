#include <iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;

class graph{
    public:
        unordered_map<int,list<pair<int,int>>> adj;
        
    void addedge(int u,int v, int weight){
        pair<int,int> p=make_pair(v,weight);
        adj[u].push_back(p); // add pair to adjacency list
    }
    
    void print(){
        for(auto i : adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<<"["<<j.first<<","<<j.second<<"]";
            }
            cout<<endl;
        }
    }
    void dfs(int node,vector<bool> &visited,
    stack<int> &s){
         visited[node]=true; 
        for(auto neighbour: adj[node]){ 
           if(!visited[neighbour.first]){
                dfs(neighbour.first,visited,s);  
            }
        }
             s.push(node);
     }
     
     void getshortest(int src, vector<int> &dis, stack<int> &s)
     {
          dis[src]=0;
    while(!s.empty()){
        int top=s.top();
        s.pop();
        
        if(dis[top]!=INT_MAX){
            for(auto i:adj[top]){
                if(dis[top]+i.second < dis[i.first]){
                    dis[i.first]=dis[top]+i.second;
                }
            }
        }
    }
     }
};

int main(){
    graph g;
    g.addedge(0,1,5);
    g.addedge(0,2,3);
    g.addedge(1,2,2);
    g.addedge(1,3,6);
    g.addedge(2,3,7);
    g.addedge(2,4,4);
    g.addedge(2,5,2);
    g.addedge(3,4,-1);
    g.addedge(4,5,-2);
    g.print();
    
    int n=6;
    
    // to store if node is already visited or not
    vector<bool> visited(n); 
    stack<int> s;  // for topological sort
    
    // topological sort
     for(int i=0;i<n;i++){
        if(!visited[i]){
            g.dfs(i,visited,s);
        }
    } 
     
    // create and update distance array
    int src=1;
    vector<int> dis(n);
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    
   g.getshortest(src,dis,s);
    cout<<"answer is"<< endl;
    for(int i=0;i<dis.size();i++){
        cout<<dis[i]<<" ";
    }
    cout<<endl;
    return 0;
}
