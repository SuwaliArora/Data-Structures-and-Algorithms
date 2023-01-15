class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,digitsum=0;
        for(int it:nums){
            sum+=it;
            if(it>9){
                  while(it>0){
                      digitsum+= (it%10);
                      it=it/10;
                  }
            }
            else{
                digitsum+=it;
            }
        }
        return abs(sum-digitsum);
    }
};
