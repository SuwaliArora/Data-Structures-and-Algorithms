class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> mp;
        int max_index=0,sum=0;
        for(int i=0;i<n;i++){
            sum=sum+A[i];
            if(sum==0){
                max_index=i+1;
            }
            else{
                // to check if sum is present in map or not
                if(mp.find(sum)!=mp.end()){
                     max_index=max(max_index,i-mp[sum]);
                }
                else{
                    mp[sum]=i;
                }
            }
        }
        return max_index;
    }
};
