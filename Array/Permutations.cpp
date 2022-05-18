class Solution {
public:
    void solve(int index,vector<int>& nums, vector<vector<int>>& ans){
        // base condition
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
           swap(nums[j],nums[index]);
            // recursive call
           solve(index+1,nums,ans);
           // backtracking as we are making changes in the original array
            swap(nums[j],nums[index]);    
        }        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0,nums,ans);
        return ans;
    }
};
