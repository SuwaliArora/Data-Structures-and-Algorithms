class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int high=nums.size()-1,low=0,sum=0;
        int mid=low+(high-low)/2;
        for(int i=0;i<=high;i++){
            sum+=abs(nums[i]-nums[mid]);
        }
        return sum;
    }
};
