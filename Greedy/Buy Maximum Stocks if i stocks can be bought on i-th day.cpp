class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({price[i],i+1});
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int prices=a[i].first;
            int stock=a[i].second;
            if(prices* stock <=k){
                ans+=stock;
                k-=(prices*stock);
            }
            else{
                ans+= (k/prices);
                k-= prices*(k/prices);
            }
        }
        return ans;
    }
};
