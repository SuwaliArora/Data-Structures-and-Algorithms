class Solution {
public:
    int firstUniqChar(string s) {
      unordered_map<char,int> mp;
        char ans;
        int n=s.length(),i;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(i=0;i<n;i++){
            if(mp[s[i]]==1){
                 return i;
            }
        return -1;
    }
};
