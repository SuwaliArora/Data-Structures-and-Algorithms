class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        priority_queue<int> pq;
        for(int it:piles){
            pq.push(it);
        }
        while(k--){
            int a=pq.top();
            pq.pop();
            a=a-floor(a/2);
            pq.push(a);
        }
        int sum=0;
        while(!pq.empty()){
            int b=pq.top();
            pq.pop();
            sum+=b;
        }
        return sum;
    }
};
