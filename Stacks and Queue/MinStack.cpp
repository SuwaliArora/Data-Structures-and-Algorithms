class MinStack {
public:
    long long mini=INT_MAX;
    stack<long long> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            mini=val;
        }
        else{
            if(val<mini){
                s.push(2*(long long)val - mini);
                mini=val;
            }
            else{
                s.push(val); // push modified value
            }
        }
    }
    
    void pop() {
        if(s.empty()) return;
        long long ele=s.top();
        s.pop();
        if(ele<mini){
            // it is the modified value
            mini=2*mini - ele; // mini will become the previous minimum element
        }
        
    }
    
    int top() {
        if(s.empty()) return -1;
        
        long long ele=s.top();
        if(ele<mini) return mini;
        else return s.top();
    }
    
    int getMin() {
        return mini;
    }
};
//tc=O(1), sc=O(n)
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
