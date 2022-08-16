class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Subset;
        vector<int> output;
        
        int index=0;
        
        // call function to check wheter to consider the current element or not
        func(index,nums,output, Subset);
        
        return Subset;
    }
    
    void func(int index, vector<int> nums, vector<int> output, vector<vector<int>> &Subset)
    {
        // base case
        if(index==nums.size()){
            Subset.push_back(output);
            return;
        } 
         //exclude the element
         func(index+1, nums, output, Subset);
        
        // include the element
         output.push_back(nums[index]);
         func(index+1, nums, output, Subset);
    }
};
