class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n=nums.size();
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>1) ans.push_back(it); 
        }
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
