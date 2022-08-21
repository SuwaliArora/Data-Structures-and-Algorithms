class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prefix=1,postfix=1;
        vector<int> a(n,1);
        for(int i=0;i<n;i++){
            a[i]=prefix;
            prefix*=nums[i];
            
        }
        for(int i=n-1;i>=0;i--){
            a[i]*=postfix;
            postfix*=nums[i];
        }
        return a;
    }
};
