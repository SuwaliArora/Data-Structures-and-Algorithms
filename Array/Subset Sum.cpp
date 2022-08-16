class Solution
{
public:
    void solve(int ind,vector<int> arr, int n,vector<int> &ans, int sum){
        // base condition
        if(ind==n) 
           {
               ans.push_back(sum);
               return;
           }
        // recursive call to pick element
        solve(ind+1,arr,n,ans,sum+arr[ind]);
        // recursive call to not pick element
        solve(ind+1,arr,n,ans,sum);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        
        vector<int> ans;
        // call for function solve
        solve(0,arr,n,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
