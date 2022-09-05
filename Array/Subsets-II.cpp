class Solution {
public:
    void solve(int index,vector<int>& nums,vector<int> output,set<vector<int>> &ds){
        if(index==nums.size()){
            ds.insert(output);
            return;
        }
        output.push_back(nums[index]);
        solve(index+1,nums,output,ds);
        output.pop_back();
         solve(index+1,nums,output,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> output;
        set<vector<int>> ds;
        solve(0,nums,output,ds);
        for(auto it: ds){
            ans.push_back(it);
        }
        return ans;
    }
};
