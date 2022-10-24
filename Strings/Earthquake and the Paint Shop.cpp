struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
         vector<alphanumeric> ans;
        map<string,int> mp;
        for(auto it: A) mp[it]++;
        
        for(auto i: mp) ans.push_back({i.first,i.second});
        
        return ans;
    }
};
