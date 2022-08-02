class Solution {
public:
    string makeFancyString(string s) {
        string str="";
        int n=s.size(),count=1;
        if(n<3) return s;
        str+=s[0];
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) count++;
            else count=1;
            if(count<3) {
                str+=s[i];
            }
        }
        return str;
    }
};
