class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> output;
        int index=0;
        solve(index,s,result,output);
        return result;
    }
    void solve(int index,string s,vector<vector<string>> &result, vector<string> output){
        // base case
        if(index==s.size()){
            result.push_back(output);
            return;
        }
        for(int i=index;i<s.size();i++){
           if(isPalindrome(s,index,i)){
               output.push_back(s.substr(index,i-index+1));
               //recursive call
               solve(i+1,s,result,output); // to check if string can be partitioned after ith index or not
               output.pop_back(); //backtracking
           } 
        }   
    }
    //function to check if substring is palindrome or not
    bool isPalindrome(string s, int start,int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++, end--;
        }
        return true;
    }
};
