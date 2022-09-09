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
       int pivot=arr[high];
       int i=low-1;
       for(int j=low;j<=high-1;j++){
           if(arr[j]<pivot){
               i++;
               swap(arr[i],arr[j]);
           }

       }
       swap(arr[i+1],arr[high]); // put the pivot to its correct position
       return i+1;
    }
    
};
