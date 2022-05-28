class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i;
        for(i=0;i<=n;i++){
            if(i==n) return i;
            if(nums[i]!=i){
                return i;
            }
       
        }
        return -1;
    }
};
