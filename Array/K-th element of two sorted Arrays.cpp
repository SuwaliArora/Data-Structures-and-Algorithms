class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int t)
    {
        int arr[n+m],k=0;
        for(int i=0;i<n;i++){
            arr[k]=arr1[i];
            k++;
        }
        for(int i=0;i<m;i++){
            arr[k]=arr2[i];
            k++;
        }
        sort(arr,arr+k);
        return arr[t-1];
    }
};
