class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
       vector<int> ans;
       int m=n;
       sort(candies,candies+n);
       int mini=0,maxi=0;
       for(int i=0;i<m;i++){
           mini+=candies[i];
           m=m-k;
       }
       ans.push_back(mini);
       int t=0;
       for(int i=n-1;i>=t;i--){
           maxi+=candies[i];
           t=t+k;
       }
       ans.push_back(maxi);
       return ans;
    }
};
