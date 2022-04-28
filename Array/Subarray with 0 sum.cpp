class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> sumset;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0||sumset.find(sum)!=sumset.end()){
                return true;
            }
            sumset.insert(sum);
        }
        return false;
    }
};
