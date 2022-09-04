class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int> ans;
        stack<int> s;
        unordered_map<int ,int> mp;
        
        for(int i=m-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()) {
                mp[nums2[i]]=-1;
            }
            else mp[nums2[i]]=s.top(); 
            s.push(nums2[i]);
        }
        for(int i=0;i<n;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};
