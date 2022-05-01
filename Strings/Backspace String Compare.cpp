class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        
        // traverse string s 
        for(char c: s){
            if(c=='#'){
                if(!s1.empty())
                s1.pop();
            }
            else{
                s1.push(c);
            }
        }
        
        // traverse string t
         for(char c: t){
            if(c=='#'){
                if(!s2.empty())
                s2.pop();
            }
            else{
                s2.push(c);
            }
        }
        // add remaining elements in string str1
        string str1="";
        while(!s1.empty()){
            str1+=s1.top();
            s1.pop();
        }
         // add remaining elements in string str2
        string str2="";
        while(!s2.empty()){
            str2+=s2.top();
            s2.pop();
        }
        return str1==str2;
    }
};
