class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int count=0;
        for(auto c: s){
            if(mp[c]>0)
            {
                count+=2;
                mp[c]--;
            }
            else{
                mp[c]++;
            }
        }
        
        if(count<s.size()) count++;
        return count;
    }
};
