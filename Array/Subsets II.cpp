class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> Subset;
        vector<int> output;
        
        int index=0;
        
        // call function to check whether to consider the current element or not
        func(index,nums,output, Subset);
        
        return Subset;
        
    }
    void func(int index, vector<int> nums, vector<int> output, vector<vector<int>> &Subset)
    {
        // base case
        Subset.push_back(output);
         
        for(int i=index; i<nums.size();i++)
        {
            if(i>index && nums[i]==nums[i-1]){
            continue;  // not to pick the candidates[i] element as it is previously selected and avoids duplicacy
            } 
            output.push_back(nums[i]);
            func(i+1,nums,output, Subset);
            output.pop_back(); //backtracking
        }      
    }
};
