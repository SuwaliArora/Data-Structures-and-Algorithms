class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long total=0,curr=0,n=nums.size();
        for(int i:nums){
            total+=i;
        }
        int mini=INT_MAX, index=0;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            int avg1=curr/(i+1);
            // edge case- if i is at last
            if(i==n-1){
                if(avg1<mini) return n-1;
                else
                    break;
            }
            int avg2=(total-curr)/(n-i-1);
            if(abs(avg1-avg2)<mini){
                mini=abs(avg1-avg2);
                index=i;
            }
        }
        return index;
    }
};
