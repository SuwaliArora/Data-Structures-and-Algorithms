class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        // find the maximum element of array
        for(int ele: nums){
            maxi=max(maxi,ele);
        }
        int count=0, ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi) {
                count++;
                ans=max(ans,count);
            }
            else count=0;
        }
     return ans;
    }
};
