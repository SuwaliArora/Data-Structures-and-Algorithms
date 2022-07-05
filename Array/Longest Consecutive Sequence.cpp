class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int result=0,prev=nums[0],count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==prev+1){
                count++;
            }
            else if(nums[i]!=prev){
                count=1;
            }
            result=max(result,count);
            prev=nums[i];
        }
        return result;
    }
};
