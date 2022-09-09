class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int pi=partition(arr,low,high);  // at this position pivot element will be placed
            quickSort(arr,low,pi-1); // recursive call for left subarray
            quickSort(arr,pi+1,high); // recursive call for right subarray
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int i=low;
       int j=high;
      while(i<=j){
           while(pivot>=arr[i]) i++;
           while(pivot<arr[j]) j--;
           if(i<j) swap(arr[i],arr[j]);
       }
       swap(arr[low],arr[j]); // at this point pivot will be at its correct position
      
       return j;
    }
    
};

// worst case- already sorted array- O(n^2)
// Best case- Middle element as pivot (nLogn)
// Average case - O(nLogn)
