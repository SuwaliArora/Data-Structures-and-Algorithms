class Solution{
public:
   bool isPrime(int num){
       for(int i=2;i<=num/2;i++){
           if(num%i==0) return false;
       }
       return true;
   }
    long long primeProduct(long long L, long long R){
        // code here
        int product=1;
        for(int i=L;i<=R;i++){
            if(isPrime(i)){
                product=product*i;
            }
        }
      
        return product%1000000007;
    }
};
