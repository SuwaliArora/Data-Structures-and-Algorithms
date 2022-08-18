class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int ans=0,n1=0, n=arr.size();
        vector<int> v; // to store frequency count of elements
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            v.push_back(it.second);
        }
        if(v.size()==1) return 1;
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--){
            if(ans>=n/2)
                return n1;
        
        n1++;
        ans=ans+v[i];
        }
        return 0;
    }
};
