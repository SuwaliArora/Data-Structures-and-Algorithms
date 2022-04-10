class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     unordered_map<char, int> mp;
        int n=s.size(), left=0,right=0,length=0;
        while(right<n){
            if(mp.find(s[right])!=mp.end()){
                left=max(mp[s[right]]+1, left);
            }
            length=max(length, right-left+1);
            mp[s[right]]=right;// mark the character with new index number in the map;
            right++;
        }
        return length;
    }
};
