class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        set<int> st;
        for(auto it:mp){
            st.insert(it.second);
        }
        if(st.size()==1) 
            return true;
        else
            return false;
    }
};

// time complexity= O(n)+O(nlogn)
// space complexity= O(n)+O(n)
