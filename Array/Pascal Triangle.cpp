// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
       
       vector<vector<ll>> result(n);
       int count=0;
       for(int i=0;i<n;i++){
           result[i].resize(i+1);
           result[i][0]=result[i][i]=1;
           for(int j=1;j<i;j++){
               result[i][j]=(result[i-1][j-1]+result[i-1][j])% 1000000007;
           }
       }
       return result[n-1];
    }
};
