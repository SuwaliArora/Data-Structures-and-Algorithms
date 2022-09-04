class MinStack {
public:
    stack<pair<int,int>> s;
    int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        int mini;
        if(s.empty()) mini=val;
        else{
            mini=min(s.top().second,val);
        }
        s.push({val,mini});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first; 
    }
    
    int getMin() {
        return s.top().second;
    }
};
//tc=O(1), sc=O(2n) as we are using pairs in stack

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
