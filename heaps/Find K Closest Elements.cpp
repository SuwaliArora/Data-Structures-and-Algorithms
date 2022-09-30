class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // max heap
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            // store absolute diff of elements with x and arr[i]
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0) {
            int a=pq.top().second;
            pq.pop();
            ans.push_back(a);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
