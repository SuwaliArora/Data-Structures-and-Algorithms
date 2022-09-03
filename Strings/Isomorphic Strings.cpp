class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1,mp2;
        int n=s.length();
        for(int i=0;i<n;i++){
            char c1=s[i],c2=t[i];
            if(mp1[c1]){
                if(mp1[c1]!=c2) return false;
            }
            // ek character dusri ke liye use nhi hona chahiye isiliye ye condition use ki
            else if(mp2[c2]){
                if(mp2[c2]!=c1) return false;
            }
            else {
                mp1[c1]=c2;
                mp2[c2]=c1;
            }
        }
        return true;
    }
};
