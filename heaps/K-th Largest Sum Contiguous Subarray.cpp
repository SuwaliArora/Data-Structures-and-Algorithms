class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        
        // create min heap using priority queue
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<N;i++){
            int sum=0;
            for(int j=i;j<N;j++){
                sum+=Arr[j];
                if(pq.size()<K){
                    pq.push(sum);
                }
                else{
                    if(sum>pq.top()){
                        pq.pop();
                        pq.push(sum);
                    }
                }
            }
        }
        return pq.top();
    }
};
