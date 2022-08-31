// Stack class.
class Stack {
    int *arr;
    int size;
    int tops;
public:
    
    Stack(int capacity) {
        arr=new int[capacity];
        tops=-1;
        size=capacity;
    }

    void push(int num) {
        if(isFull())
            return;
       
        else{
            tops++;
            arr[tops]=num;
        }
    }

    int pop() {
        // Write your code here.
        if(tops== -1){
            return -1;
        }
        int ans=arr[tops];
        tops--;
        return ans;
    }
    
    int top() {
        if(isEmpty()) return -1;
       return arr[tops];
    }
    
    int isEmpty() {
        if(tops==-1) return 1;
        else{
            return 0;
        }
    }
    
    int isFull() {
        if(tops==size-1) return 1;
        else{
            return 0;
        }
    }
    
};
