class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int count=0;
        solve(s, count, sizeOfStack);
    }
    void solve(stack<int>&s, int count, int sizeOfStack){
        //base case
        if(count==sizeOfStack/2){
            s.pop();
            return;
        }
        int num=s.top();
        s.pop();
        
        //recursive call
        solve(s,count+1, sizeOfStack);
        
        //push back the elements in the stack
        s.push(num);
    }
};
