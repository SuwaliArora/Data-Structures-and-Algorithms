class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,n=nums.size(),ind2;
        if(n==1){
            return;
        }
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(nums,0,n-1);
        }
        else{
            for(ind2=n-1;ind2>i;ind2--){
                 if(nums[ind2]>nums[i])
                      break;
             }
             swap(nums,i,ind2);
             reverse(nums, i+1, n-1);
             } 
    }
    void swap(vector<int>& nums, int ind1, int ind2){
        int temp=nums[ind1];
        nums[ind1]=nums[ind2];
        nums[ind2]=temp;
    }
    
    void reverse(vector<int>& nums, int i, int j){
        while(i<j){
            swap(nums, i, j);
            i++,j--;
        }
    }
};
