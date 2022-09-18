class Solution {
public:
    int distributeCandies(vector<int>& c) {
        unordered_map<int,int> mp;
        int n=c.size();
        for(int i=0;i<n;i++){
            mp[c[i]]++;
        }
        int count=0;
        for(auto i: mp){
            count++;
            if(count==n/2) break;
        }
        return count;
    }
};
