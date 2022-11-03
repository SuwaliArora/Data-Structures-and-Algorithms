class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        int count=0;
        string str="";
         for(auto c: words){
             str=c;
             reverse(str.begin(),str.end());
             // if reverse is present in the map, then pallindrome can be possible
             if(mp[str]>0){
                 count+=4;
                 mp[str]--;
             }
             else{
                 mp[c]++;
             }
         }  
        for(auto c:words){
            if(c[0]==c[1]&&mp[c]>0) {
                count+=2;
                break;
            }
        }
        return count;
    }
};
