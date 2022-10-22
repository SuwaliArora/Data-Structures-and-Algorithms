class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        int count=1,maxi=1; // if maxi=INT_MIN to string of length 1 ke liye result INT_MIN ho jaega coz aage ko character h hi nhi comparison ke liye 
        for(int i=0;i<n-1;i++){
            if(s[i]+1==s[i+1]) count++;
            else count=1;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
