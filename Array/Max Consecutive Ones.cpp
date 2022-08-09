class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0,maxcount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) count++;
            maxcount=max(maxcount,count);
            if(nums[i]==0){
                count=0;
            }
        }
        return maxcount;
    }
};
