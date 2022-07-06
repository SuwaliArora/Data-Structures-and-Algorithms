class Solution {
public:
    int fib(int n) {
       // base condition
        if(n==0) 
            return 0;
        if(n==1)
            return 1;
        // recursive call for previous two numbers
        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
};
