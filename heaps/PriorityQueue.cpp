#include<iostream>
#include<queue>
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
 
int main() {
    heap h;
   
    cout<<"Using Priority Queue here"<<endl;
    // max heap by priority queue
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"element at top-"<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top-"<<pq.top()<<endl;
    cout<<"size of priority queue-"<<pq.size()<<endl;

    // min heap by priority queue

    priority_queue<int, vector<int>, greater<int>> q;
    q.push(4);
    q.push(2);
    q.push(5);
    q.push(3);

    cout<<"element at top-"<<q.top()<<endl;
    q.pop();
    cout<<"element at top-"<<q.top()<<endl;
    cout<<"size of priority queue-"<<q.size();
    return 0;
}
