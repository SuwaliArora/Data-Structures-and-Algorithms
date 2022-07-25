class Solution {
public:
    int first(vector<int>& nums,int left,int right,int target){
        int result=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
                if(nums[mid]==target){
                    result=mid;  // if we find the target,then will continue our search for first occurance in left side
                    right=mid-1;
                }
                else if(nums[mid]<target){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
        }
        return result;
    }
    int last(vector<int>& nums,int left,int right,int target){
         int result=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                    result=mid;
                    left=mid+1; // if we find the target,then will continue our search for last occurance in right side
            }
           else if(nums[mid]>target){
                right=mid-1;
                    
                }
                else{
                   left=mid+1;
                }
        }
        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);   
        int left=0,right=nums.size()-1;
        ans[0]=first(nums,left,right,target);
        ans[1]=last(nums,left,right,target);
        return ans;
    }
};
