class Solution {
public:
   bool isprime(int n){
      if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
    
   }
    string isSumOfTwo(int n){
        
      for(int i=2;i<=n/2;i++){
          if(isprime(i) && isprime(n-i)) return "Yes";
      }
      return "No";
    }
};
