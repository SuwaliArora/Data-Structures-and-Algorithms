class Solution {
public:
    void solve(int index,int n, int k,vector<vector<int>> &ans, vector<int> &output){
        if(k==0){
            ans.push_back(output);
            return;
        }
        int i;
        for( i=index;i<=n;i++){
            output.push_back(i);
            solve(i+1,n,k-1,ans,output);
            output.pop_back();   // backtracking
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=1;
        solve(index,n,k,ans,output);
        return ans;
    }
};
