class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string str="";
        int n=s.length();
        if(n==0) return "";
        if(n==1) return s;
        for(int i=0;i<n;i++){
           if(st.empty()) st.push(s[i]);
            else{
                if(abs(s[i]-st.top())==32) st.pop();
                else st.push(s[i]);
            }
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
