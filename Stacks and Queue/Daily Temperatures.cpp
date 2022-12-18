class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int> ans(n,0);
        stack<int> st;
        //ans[n-1]=0;
        for(int i=n-1;i>=0;i--){
            //int count=0;
            if(st.empty()){
                st.push(i);
                //ans[i]=0;
            }
            else{
                while(!st.empty() && t[i]>=t[st.top()]){
                    st.pop();
                    //count++;
                }
                if(st.empty()){
                st.push(i);
                //ans[i]=0;
            }
               else{
                   ans[i]=st.top()-i;
                   st.push(i);
               }
               // st.push(t[i]);
            }
        }
        return ans;
    }
};
