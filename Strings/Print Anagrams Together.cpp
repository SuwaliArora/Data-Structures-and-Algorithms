class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        vector<vector<string> > ans;
        unordered_map<string,vector<string>> mp;
        int n=s.size();
        for(auto it:s){
            string st=it;
            sort(st.begin(),st.end());
            mp[st].push_back(it);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
