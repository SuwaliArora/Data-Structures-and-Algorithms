class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10) return  {};
        unordered_map<string,int> mp; // to store occurance of all strings
        vector<string> v;
        string str="";
         for(int i=0;i<10;i++){
             str+=s[i];
         }
        mp[str]++;
        // sliding window technique
        for(int i=1;i<s.length()-9;i++){
            // remove first character of string
            str.erase(0,1);
            str+=s[i+9]; // add 1 character in the last of string
            mp[str]++;
            
            if(mp[str]==2) {
                v.push_back(str);
            }
        }
        return v;
    }
};
