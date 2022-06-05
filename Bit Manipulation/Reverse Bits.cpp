class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=31;i>=0;i--){
            int lb=n&1; // to find unit(end) place bit of n
           if(lb==1)
                ans+=(1<<i); // shift the bit to the left
          n=n>>1;  // right shift
        }
       return ans;           
    }
};
