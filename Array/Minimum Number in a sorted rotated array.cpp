class solution{

    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        int ans=INT_MAX;
        while(low<=high){
        int mid=low+(high-low)/2;
        ans=min(ans,arr[mid]);
        if(arr[mid]>=arr[high]){
            low=mid+1;
        }
        else if(arr[mid]<arr[high]){
            high=mid-1;
        }
    }
    return ans;
        
    }
};
