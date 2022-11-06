class Solution{
public:
    vector<int> minPartition(int n)
    {
        vector<int> ans;
        vector<int> arr{2000,500,200,100,50,20,10,5,2,1};
        int i=0;
        while(n){
            if(arr[i]>n) i++;
            else{
                n=n-arr[i];
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
