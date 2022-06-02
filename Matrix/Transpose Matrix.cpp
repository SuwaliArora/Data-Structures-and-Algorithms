class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> mat(matrix[0].size(), vector<int>(matrix.size()));
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                mat[i][j]=matrix[j][i];
            }
        }
        return mat;
    }
};
