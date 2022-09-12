class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        int i=0,j=s.length()-1;
        while(i<j){
            
            while(i<j && !(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9' || s[i]>='A' && s[i]<='Z')) i++;
            while(i<j && !(s[j]>='a' && s[j]<='z' || s[j]>='0' && s[j]<='9' || s[j]>='A' && s[j]<='Z')) j--;
            
            char ch=tolower(s[i]);
            char st=tolower(s[j]);
            
            if(ch!=st) return false;
           
            i++;
            j--;
        }
        return true;
    }
};
