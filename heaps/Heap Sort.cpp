class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      int largest=i;
      int left=2*i+1, right=2*i+2; // children
      
      if(left<n && arr[largest]<arr[left]) largest=left;
      if(right<n && arr[largest]<arr[right]) largest=right;
      
      if(largest!=i){
          swap(arr[largest],arr[i]);
          heapify(arr,n,largest);
      } 
      
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
       for(int i=n/2-1;i>=0;i--) 
           heapify(arr,n,i);
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        int size;
        for(size=n-1;size>0;size--){
            swap(arr[size],arr[0]);  // swap root and last element
            
            // place root element at its correct position
            heapify(arr,size,0);
        }
    }
};
