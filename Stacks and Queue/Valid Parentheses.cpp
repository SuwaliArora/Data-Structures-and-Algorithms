class Solution {
public:
    bool isValid(string s) {
        // for all strings there must be equal opening and close brackets
        if(s.length()%2==1)
            return false;
        
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            if(s[i]==')'){
                if(st.empty()) return false;
                if(st.top()!='(') return false;
                st.pop();
            }
            if(s[i]==']'){
                if(st.empty()) return false;
                if(st.top()!='[') return false;
                st.pop();
            }
            if(s[i]=='}'){
                if(st.empty()) return false;
                if(st.top()!='{') return false;
                st.pop();
            }
        }
        return st.empty();
        
    }
};
