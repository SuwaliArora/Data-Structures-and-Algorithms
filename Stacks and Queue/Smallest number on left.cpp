class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        vector<int> ans(n,-1);
      stack<int> s;
      for(int i=0;i<n;i++){
          while(!s.empty() && s.top()>=a[i]) s.pop();
          
          if(!s.empty() && s.top()<a[i]) ans[i]=s.top();
          
          s.push(a[i]);
      }
      return ans;
    }
};
