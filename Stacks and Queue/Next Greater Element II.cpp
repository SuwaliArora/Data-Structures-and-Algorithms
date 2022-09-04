class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        stack<int> s;
        vector<int> res(n,-1); // initialize array of size n with -1
        
        for(int i=2*n -1;i>=0;i--){
            if(!s.empty() && s.top()>nums[i%n]) res[i%n]=s.top();
             else if(!s.empty() && s.top()<=nums[i%n]){
                 while(!s.empty() && s.top()<=nums[i%n]) s.pop();
                 
                 if(!s.empty()) res[i%n]=s.top();
             }
            s.push(nums[i%n]);
        }
        return res;
    }
};
