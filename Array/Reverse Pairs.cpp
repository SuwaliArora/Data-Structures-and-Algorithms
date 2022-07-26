class Solution {
public:
    int merge(vector<int>& nums,int low,int mid,int high){
        int count=0;
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i]> 2LL*nums[j]){
                j++;
            }
            count+=(j-(mid+1));
        }
        vector<int> ans;
        int left=low,right=mid+1; // left,right pointing to first half of the array
        // till the end of left or right array
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right])
                ans.push_back(nums[left++]);
            else{
                ans.push_back(nums[right++]);
            }
        }
        // if any of the array reaches to end
        while(left<=mid){
            ans.push_back(nums[left++]);
        }
         while(right<=high){
            ans.push_back(nums[right++]);
        }
        // copy all elements of temp into num
        for(int i=low;i<=high;i++){
            nums[i]=ans[i-low];
        }
        return count;
    }
    int mergesort(vector<int>& nums,int low,int high){
        if(low>=high) return 0;
        int mid=low+(high-low)/2;
        int inv=mergesort(nums,low,mid);
        inv+=mergesort(nums,mid+1,high);
        inv+=merge(nums,low,mid,high);
        return inv;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};
