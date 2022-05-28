class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
       vector<int> ans;
       for(int i=0;i<N;i++){
           int sum=0;
           for(int j=i;j<N;j++){
               sum+=Arr[j];
               ans.push_back(sum);
           }
       }
       sort(ans.begin(),ans.end());
       
       return ans[ans.size()-K];
    }
};
