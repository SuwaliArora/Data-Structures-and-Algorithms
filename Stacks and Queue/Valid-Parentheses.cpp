class Solution {
public:
    bool isValid(string s) {
        // for all strings there must be equal opening and close brackets
        if(s.length()%2==1)
            return false;
        
        //create a map for brackets pair
        unordered_map<char,char> pair{
            {'(',')'}, {'{','}'}, {'[',']'}
        };
        
        stack<char> st;
        //traversing the string
        for(char c:s){
            if(pair.find(c) != pair.end()){
                st.push(c);
            }
            else{
                if(st.empty() || c != pair[st.top()]) return false;
            
                st.pop();
            }
        }
        return st.empty();
        
    }
};
