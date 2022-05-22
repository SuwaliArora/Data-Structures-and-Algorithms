class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.length()==0) return result;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string output;
        solve(0,digits,result,output,mapping);
        return result;
    }
    void solve(int index,string digits, vector<string> &result,string &output,string mapping[]){
        if(index==digits.length()){
            result.push_back(output);
            return;
        }
        int number=digits[index]-'0'; // to get integer eqivalent of character
        string value=mapping[number];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(index+1,digits,result,output,mapping);
            output.pop_back();
        }
    }
};
