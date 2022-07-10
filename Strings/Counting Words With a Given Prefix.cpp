class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
       int count=0;
       int n=pref.length();
        for(auto it: words){
            if(it.substr(0,n)==pref)
                count++;
        }
        return count;
    }
};
