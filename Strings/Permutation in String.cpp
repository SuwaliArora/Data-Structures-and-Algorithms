class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size(), n=s2.size();
        // check if size of s1 is smaller than size of s2
        if(m>n){
            return false;
        }
        
        unordered_map<char,int> mp1,mp2;
        for(int i=0;i<m;i++){
            mp1[s1[i]]++;
            if(i<m-1){
                 mp2[s2[i]]++;
            }
        }
        for(int i=m-1;i<n;i++){
             mp2[s2[i]]++;
             if(mp1==mp2){
                return true;
             }
             else{
                if(mp2[s2[i-m+1]]==1){
                    mp2.erase(s2[i-m+1]); 
                }
                else{
                    mp2[s2[i-m+1]]--;
                }    
            }
        }
        return false;
    }
};
