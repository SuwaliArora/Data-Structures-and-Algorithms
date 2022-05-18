class Solution {
public:
    void solve(int start, int k, int n, vector<int> &output, vector<vector<int>> &ans)
    {
        // base condition
        if(k<=0){
            if(n==0){
                ans.push_back(output);
            }
            return;
        }
        for(int i=start;i<=9;i++){
            output.push_back(i);
            solve(i+1,k-1,n-i,output,ans);
            output.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;
        solve(1,k,n,output,ans);
        return ans;
    }
};
