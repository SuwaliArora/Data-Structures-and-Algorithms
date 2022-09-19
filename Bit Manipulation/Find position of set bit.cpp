class Solution {
  public:
    int findPosition(int N) {
         int count=0,i=0;
        while(N){
            i++;
            // and with  bit 1 is 1
            if(N&1)
                count++;  // and operation with rightmost bit
            N=N>>1; // right shift
        }
        return count!=1 ? -1 : i;
    }
};
