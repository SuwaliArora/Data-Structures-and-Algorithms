class Solution {
public:
    long long int killinSpree(long long int n)
    {
        // Code Here
        long long sum=0,count=0;
        int i=1;
        while(i*i <= n){
            count++;
            n=n-(i*i);
            i++;
        }
        return count;
    }
};
