class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
           int low=i+1,high=n-1;
            while(low<high)
            {
                int curr=nums[i]+nums[low]+nums[high];
                if(curr==target) return target;
                else if(curr>target) high--;
                else low++;
                if(abs(curr-target)< abs(result-target)) result=curr;
               // else result=result;
            }
        }
        return result;
        
    }
};
