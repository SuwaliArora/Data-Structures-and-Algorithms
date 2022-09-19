class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a=n&1; // get the rightmost bit
        n=n>>1;
        while(n){
            if(a== (n&1)) return false;
            else a=n&1;
            n=n>>1;
        }
        return true;
    }
};
