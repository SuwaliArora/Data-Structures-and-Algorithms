class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[j]==nums[j-1]){
                j++;
            }
            else{
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        return i+1;
    }
};
