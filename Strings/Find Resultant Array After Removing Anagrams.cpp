class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> s;
        s.push_back(words[0]); // first string will always be present in the final answer
        
        sort(words[0].begin(),words[0].end());
        string str=words[0]; // after sorting
        
        for(auto it: words){
            string ch=it;
            sort(it.begin(),it.end());
            if(it!=str) s.push_back(ch); // if current string is not the anagram of previous string
            
            str=it; 
        }
        return s;
    }
};
