class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j=0,i=0;
        while(i<popped.size()){
            if(st.empty() || st.top()!=popped[i] && j<pushed.size()){
                st.push(pushed[j]);
                j++;
            }
            else if(st.top()==popped[i]){
                st.pop();
                i++;
            }
            else{
                break;
            }
        }
        return st.empty();
    }
};
