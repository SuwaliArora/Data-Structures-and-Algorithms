class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int a=target-nums[i];
            if(mp.find(a)!=mp.end()){
                result.push_back(i);
                result.push_back(mp[a]);
                return result;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return result;
    }
};
