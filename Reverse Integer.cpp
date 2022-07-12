class Solution {
public:
    int reverse(int x) {
        long long int rev=0;
        while(x!=0){
            int digit=x%10;
            rev=(rev*10) + digit;
            x=x/10;
        }
        // check if reverse integer is beyond the integer range
        if(rev>INT_MAX || rev<INT_MIN){
                 return 0;
        }
        return rev;
    }
};
