// brute force

class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str="";
        int n=s.length(),m=t.length(),i=0,j=0;
        while(i<m && j<n){
            if(t[i]==s[j]) {
                i++;
                j++;
            }
            else i++;
        }
        return j==n;  // if string s is completely traversed
    }
};
