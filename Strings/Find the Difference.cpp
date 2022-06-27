class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]]+=1;
        }
         for(int i=0;i<s.length();i++){
            mp[s[i]]-=1;
        }
        for(int i=0;i<t.length();i++){
            if(mp[t[i]]!=0){
                return t[i];
            }
        }
        return 0;
    }
};
