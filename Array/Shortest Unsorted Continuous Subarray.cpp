class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n);
        int i,j;
        for(i=0;i<nums.size();i++){  // time complexity= O(n)
            arr[i]=nums[i];
        }
        sort(arr.begin(),arr.end()); // time complexity= O(nlogn)
        for(i=0;i<n;i++){ // time complexity= O(n)
            if(arr[i]!=nums[i]){
                break;
            } 
        }
        for(j=n-1;j>=0;j--){ // time complexity= O(n)
            if(arr[j]!=nums[j]){
                break;
            } 
        }
        if(i>j) return 0;
        return j-i+1;
    }
};

// time complexity= O(n)+O(n)+O(nlogn)
// space complexity= O(n) for another vector
