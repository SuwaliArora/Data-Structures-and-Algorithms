class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int i,count=0,element=0;
        for(i=0;i<n;i++){
            if(count==0){
                element=nums[i];
            }
            if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
    }
};
