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
    
    //implementation of heap using array
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while (index>1)
        {
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }   
    }
    // Time Complexity for insertion=O(logn)
    
    
    // function to delete root element from heap
    void deletefromHeap(){
        if(size==0){
            cout<<"No element present"<<endl;
            return;
        }
        // put last node at first
        arr[1]=arr[size];
        size--;  // remove last element from heap/array

        // move root node to its correct position
        int i=1;
        while (i<size)
        {
            int leftindex=2*i;
            int rightindex=2*i+1;

            if(leftindex< size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex< size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }  
    }
      // Time Complexity for deletion=O(logn)
    
    void print(){
        for (int i = 1; i<=size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;   
    }
};
 
int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletefromHeap();
    h.print();
    return 0;
}
