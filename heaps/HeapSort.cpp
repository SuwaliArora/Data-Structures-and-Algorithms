#include<iostream>
using namespace std;

class heap
{
private:
    /* data */
public:
    int arr[100];
    int size;
    
    // constructor
    heap(){
        arr[0]=-1;
        size=0;
    }

    void print(){
        for (int i = 1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;   
    }
};

void heapify(int arr[], int n, int i){
    int largest=i;
    int left=2*i;
    int right=2*i +1;

    if(left <= n && arr[largest] < arr[left]){
        largest=left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n, largest);  // recursive call

    }
}

void heapsort(int arr[], int n){
    int size=n;
    while (size >1)
    {
        // step-1 swap root and last element
        swap(arr[size],arr[1]);
        size--;

        // step- 2
        heapify(arr,size,1);
    }  
}
 
int main() {
    heap h;
   
    int arr[6]={-1,54,53,55,52,50};
    int n=5;

    // heap creation from array
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"print the array "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // haep sort
    heapsort(arr,n);
    cout<<"print the array "<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
