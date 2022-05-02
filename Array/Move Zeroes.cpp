class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0,j=i+1;j<n;){
            if(nums[i]==0){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    i++,j++;
                }
                else{
                    j++;
                }
            }
            else{
                i++,j++;
            }
        }
        
    }
};
