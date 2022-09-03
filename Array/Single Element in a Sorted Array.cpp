class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int res,n=nums.size();
        if(n==1) return nums[0];
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=nums[i+1]) return nums[i];
            i++;
        }  
        
        return 0;
    }
};
