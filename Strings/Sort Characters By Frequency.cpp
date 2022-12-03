class Solution {
public:
    bool static cmp(pair<char,int> p1,pair<char,int>p2){
        return p1.second>p2.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        vector<pair<char,int>> vec;
        string ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        for(auto it:mp){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(),vec.end(),cmp);
        for(auto it:vec){
            int temp=it.second;
            while(temp--){
                ans+=it.first;
            }
        }
        return ans;
    }
};
