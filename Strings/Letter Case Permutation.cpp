class Solution {
public:
    void solve(int index, string s, vector<string>& result){
        // base condition
        if(index==s.length() ){
            result.push_back(s);
            return;
        }
       
        if(isalpha(s[index])){
            s[index]=tolower(s[index]);
            solve(index+1,s,result);
            
            s[index]=toupper(s[index]);
            solve(index+1,s,result);
            
        }
        // if digit
        else{
            solve(index+1,s,result);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        solve(0,s,result);
        return result;
    }
};
