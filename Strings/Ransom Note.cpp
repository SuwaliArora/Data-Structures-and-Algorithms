class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length()) return false;
        unordered_map<char,int> mp;
        for(auto itr: magazine){
            mp[itr]++;
        }
        for(auto i:ransomNote)
        {
            mp[i]--;
            if(mp[i]<0){
                return false;
            }
        }
        return true;
    }
};
