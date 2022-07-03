class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n=words.size();
        if(s.length()< words[0].length()) return false;
        string str="";
        int i=0;
        while(str.length()<=s.length() && i<words.size()){
            str+=words[i];
            if(str==s){
                  return true;   
            }
            i++;
        } 
        return false;
    }
};
