class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        for(int i=0,j=i+1;j<n;){
              if(nums[i]%2!=0){
                  if(nums[j]%2==0){
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
        return nums;      
    }
};
