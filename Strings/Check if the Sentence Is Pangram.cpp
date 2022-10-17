class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> a(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]==0) return false;
        }
        return true;
    }
};
