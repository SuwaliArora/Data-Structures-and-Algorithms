class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length(),count=0,countspace=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ') countspace++;
            else break;
        }
        for(int i=n-1-countspace;i>=0;i--){
            if(s[i]!=' ') count++;
            else break;
        }
        return count;
    }
};
