class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        for(int i=0;i<=rowIndex;i++){
            vector<int> ans;
            for(int j=0;j<=i;j++){
               if(j==0 || j==i){
                   ans.push_back(1);
               } 
                else{
                    ans.push_back(result[i-1][j-1]+result[i-1][j]);
                }
            }
    
            result.push_back(ans);
        }
        return result[rowIndex];
    }
};
