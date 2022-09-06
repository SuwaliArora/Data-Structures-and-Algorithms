// using sliding window

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int m=haystack.length();
        if(n>m) return -1;
        
        for(int i=0;i<m-n+1;i++){
            string str=haystack.substr(i,n);
            if(str==needle) return i;
        }
        return -1;
    }
};
