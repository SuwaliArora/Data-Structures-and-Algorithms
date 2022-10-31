class Solution {
  public:
    vector<int> satisfyEqn(int a[], int n) {
       unordered_map<int,pair<int,int>> mp;
       vector<vector<int>> ans;
       for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
               int sum=a[i]+a[j];
               if(mp.find(sum)!=mp.end()){
                   pair<int,int> it=mp[sum];
                   if(i!=it.first && i!=it.second && j!=it.first && j!=it.second){
                       ans.push_back({it.first,it.second,i,j});
                   }
               }
               else
                   mp[sum]={i,j};
              
           }
       }
       if(ans.size()==0)
          return {-1,-1,-1,-1};
        sort(ans.begin(),ans.end()); return ans[0];
    }
};
