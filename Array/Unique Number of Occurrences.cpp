class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto it: arr){
            mp[it]++;
        }
        set<int> s;
        for(auto it:mp){
            // log n time complexity
            if(s.find(it.second)!=s.end()){
                return false;
            }
            // log n time complexity
            else{
                s.insert(it.second);
            }
        }
        return true;
    }
};

// time complexity= O(n)+O(nlogn)+O(nlogn)
// space complexity= O(n)+O(n)
