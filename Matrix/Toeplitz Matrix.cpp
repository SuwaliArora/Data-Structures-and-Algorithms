class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        int r=m.size(),c=m[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==r-1 || j==c-1) continue;
                else{
                    if(m[i][j]!=m[i+1][j+1]) return false;
                }
            }
        }
        return true;
    }
};
