class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            int t=s1.top();
            s1.pop();
            s2.push(t);
        }
        s1.push(x);
        while(!s2.empty()){
            int t=s2.top();
            s2.pop();
            s1.push(t);
        }
    }
    
    int pop() {
        int n=s1.top();
        s1.pop();
        return n;
    }
    
    int peek() {
       return s1.top(); 
    }
    
    bool empty() {
        return s1.empty();
    }
};
// tc=O(n) sc=(2n)

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
