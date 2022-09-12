class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        
        for(auto it: strs){
            string output=it;
            sort(it.begin(),it.end());
            mp[it].push_back(output);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
