class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long mini=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i<=n-m;i++){
        int diff=a[i+m-1]-a[i];
        if(diff<mini) mini=diff;
    }
    return mini;
    }   
};
