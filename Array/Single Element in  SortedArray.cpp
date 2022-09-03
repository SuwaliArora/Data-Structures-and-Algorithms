class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            // odd index^1 will give next even index
            // even index^1 will give previous odd index
            if(nums[mid]==nums[mid^1])
                low=mid+1; // shrink the left half
            
            else
                high=mid-1; // shrink the right half
            
        }
        return nums[low];
    }
};
