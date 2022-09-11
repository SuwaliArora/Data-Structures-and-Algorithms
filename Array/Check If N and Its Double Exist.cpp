class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(2*arr[i])!=mp.end() || (arr[i]%2==0 && mp.find(arr[i]/2)!=mp.end())) 
                return true;
            else
                mp[arr[i]]++;
        }
        return false;
    }
};
