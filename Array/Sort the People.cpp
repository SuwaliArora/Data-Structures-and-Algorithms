class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        map<int,string> mp;
        int n=heights.size();
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};
