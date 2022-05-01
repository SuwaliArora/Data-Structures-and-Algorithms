class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int r=nums.size();
        for(int i=0,j=r-1;i<=j;){
            if(abs(nums[j])>abs(nums[i])){
                result[r-1]=nums[j]*nums[j];
                r--,j--;
            }
            else{
                result[r-1]=nums[i]*nums[i];
                r--,i++;
            }
        }
        return result;
    }
};
