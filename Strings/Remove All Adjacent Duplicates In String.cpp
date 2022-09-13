class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        stack<char> st;
        for(char it: s){
            if(st.empty()) st.push(it);
            else if(it==st.top()) st.pop();
            else st.push(it);
        }
        while(!st.empty()) {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
