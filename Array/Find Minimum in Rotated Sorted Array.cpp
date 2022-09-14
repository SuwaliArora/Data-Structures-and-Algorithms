class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        if(n==1 || nums[0]<nums[n-1]) return nums[0];
        int minval=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            minval=min(minval,nums[mid]);
            if(nums[low]<=nums[mid] && nums[mid]>=nums[high]) low=mid+1;
            else high=mid-1;
        }
       return minval;
    }
};
