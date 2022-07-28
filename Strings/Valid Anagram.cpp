class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        // char=26
        int arr[26]={0}; // iitialize with 0
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            arr[t[i]-'a']--;
        }
        long long int ans=0;
        for(int i=0;i<26;i++){
            ans+=abs(arr[i]);
        }
        if(ans==0) return true;
        else return false;
    }
};
