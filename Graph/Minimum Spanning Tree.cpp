#include<algorithm>
bool cmp(vector<int>& a,vector<int>& b){
    return a[2]<b[2];
}

void makeset(vector<int> &parent, vector<int>& rank,int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int findparent(vector<int>& parent,int node){
    if(parent[node]==node){
        return node;
    }
    return parent[node]= findparent(parent,parent[node]); // path compression   
}

void unionSet(int u,int v, vector<int> &parent, vector<int>& rank){
    u=findparent(parent,u);
    v=findparent(parent,v);
    
    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[v]<rank[u]){
        parent[v]=u;
    }
    // ranks are equal
    else{
        parent[v]=u;
        rank[u]++;
    }
}
int minimumSpanningTree(vector<vector<int>>& edges, int n)
{
   // sorting based on weights 
  sort(edges.begin(),edges.end(),cmp);
  vector<int> parent(n); // array to keep track of parent of nodes
  vector<int> rank(n);  // to find rank of nodes
  makeset(parent,rank,n);
   
  int minweight=0;  // to find minimum spanning tree
  for(int i=0;i<edges.size();i++){
      int u=findparent(parent,edges[i][0]);
      int v=findparent(parent,edges[i][1]);
      int wt=edges[i][2];
      // if both nodes are from different components
      if(u!=v){
          minweight+=wt;
          unionSet(u,v,parent,rank);
      }
  }
    return minweight;
}
