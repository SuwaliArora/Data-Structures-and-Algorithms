class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int low=0,high=N-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(Arr[mid]==k){
                return mid;
            }
            else if(Arr[mid]>k){
                high=mid-1;
                
            }
            else{
                low=mid+1;
                }
            
        }
        return high+1;
    }
};
