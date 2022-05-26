class Solution {
public:
    int hammingWeight(uint32_t n) {
       // n is a binary number
        int ans=0; 
        while(n!=0){
            // performing AND operation on last bit of n and 1
            if(n&1){
                ans++;
            }
            // shift the bits of n to the right by 1
            n=n>>1;
        }
        return ans;
    }
};
