//method- 1

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t); // time complexity=O(n)
    }
};


//method- 2

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};
