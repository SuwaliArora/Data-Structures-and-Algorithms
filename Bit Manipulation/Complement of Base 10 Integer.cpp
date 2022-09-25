class Solution {
public:
    int bitwiseComplement(int n) {
        int sum=0;
        int count=0;
       if(n==0) return 1;
          
        
        while(n){
                if(n&1)
                sum+= 0*pow(2,count);
                else{
                    sum+=pow(2,count);
                }
                count++;
                n=n>>1;
            
        }
        return sum;
    }
};
