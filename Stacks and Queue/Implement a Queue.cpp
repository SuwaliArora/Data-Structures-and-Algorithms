class Queue {
public:
    int *arr,rear,qfront,size;
    Queue() {
        size=100001;
        arr= new int[size]; 
        rear=qfront=0;
        }

    bool isEmpty() {
        if(rear==qfront){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size)
            cout<<"queue is full";
        else 
            arr[rear]=data;
            rear++;
    }

    int dequeue() {
        if(isEmpty()) return -1;
        else{
            int ans=arr[qfront];
            arr[qfront]==-1;
            qfront++;
            return ans;
        }
    }

    int front() {
        if(isEmpty()) return -1;
        else {
            return arr[qfront];
        }
    }
};
