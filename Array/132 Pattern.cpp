class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        
        int thirdelement=INT_MIN;
        
        // traverse from right to left
        for(int i=nums.size()-1; i>=0;i--){
            if(nums[i]< thirdelement) {
                return true;
            }
            while(!st.empty() && st.top()<nums[i]){
                thirdelement = st.top();
                st.pop();
            }
           st.push(nums[i]);
        }
        return false;
    }
};
