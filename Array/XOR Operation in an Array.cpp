class Solution {
public:
    int xorOperation(int n, int start) {
      int xorans=0;
        for(int i=0;i<n;i++){
            xorans=xorans^(start+2*i);
        }
        return xorans;
    }
};
