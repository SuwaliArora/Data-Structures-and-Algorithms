#define ll long long int
class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        unordered_map<ll,ll> mp;
        mp[0]=1;
        ll ans=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            ans+=mp[sum];
            mp[sum]++;
        }
        return ans;
    }
};
