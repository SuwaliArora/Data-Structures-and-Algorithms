class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        int n=s.length();
        for(int i=0;i<n;i++){
            char ch=tolower(s[i]);
            if(ch>='a' && ch<='z' || ch>=48 && ch<=57){
                res+=ch;
            }
        }
        string ans=res;
        reverse(res.begin(),res.end());
        return ans==res;
    }
};
