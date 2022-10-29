class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> p;
        unordered_map<string, int> ss;
        
        stringstream in(s); // api of c++ to get substrings from string with delimitier(like space, $) 
        string word;
        int i=0,n=pattern.size();
        for(word;in>> word;i++){
            // in>>word --- to access words from string
            if(p[pattern[i]]!=ss[word]) return false;
            p[pattern[i]]=ss[word]=i+1;
        }
        return i==n; 
    }
};
