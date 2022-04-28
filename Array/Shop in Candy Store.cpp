vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies,candies+N);
        vector<int> ans;
        int maxi=0,mini=0,m=N;
        
        for(int i=0;i<m;i++){
            mini+=candies[i];
            m=m-K;
        }
        ans.push_back(mini);
        int t=0;
        for(int i=N-1;i>=t;i--){
            maxi=maxi+candies[i];
            t=t+K;
        }
        ans.push_back(maxi);
        return ans;
    }
