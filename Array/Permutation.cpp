class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>>& ans,vector<int> ds,vector<int> freq){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            if(!freq[i]) {
                ds.push_back(nums[i]); 
                // mark the element as picked
                freq[i]=1;
                solve(nums,ans,ds,freq);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(),0);
        solve(nums,ans,ds,freq);
        return ans;
    }
};

// T.C- O(n! * n)
// S.C- O(n)
