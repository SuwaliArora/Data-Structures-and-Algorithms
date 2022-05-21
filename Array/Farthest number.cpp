class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
         vector<int> ans;
         for(int i=0;i<Arr.size();i++){
             int flag=0;
             for(int j=Arr.size()-1;j>i;j--){
                 if(Arr[j]<Arr[i]){
                     flag=1;
                     ans.push_back(j);
                     break;
                 }
             }
             if(flag==0){
                 ans.push_back(-1);
             }
         }
         return ans;
    }
};
