class Solution {
public:
    int trap(vector<int>& h) {
        int left=0,right=h.size()-1,water=0,leftmax=0,rightmax=0;
        while(left<=right){
            if(h[left]<=h[right]){
                if(h[left]>=leftmax) leftmax=h[left];
                else{
                    water+=leftmax-h[left];
                }
                left++;
            }
            else{
                if(h[right]>=rightmax) rightmax=h[right];
                else{
                    water+=rightmax-h[right];
                }
                right--;
            }
        }
        return water;
    }
};
