class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_far=INT_MIN, max_here=0;
        for(int i=0;i<n;i++){
            max_here=max_here+nums[i];
            if(max_far<max_here){
                max_far=max_here;
            }
            if(max_here<0){
                max_here=0;
            }
        }
        return max_far;
    }
};
