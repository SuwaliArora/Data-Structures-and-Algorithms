class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()){
            return false;
        }
        int m = matrix.size(), n = matrix[0].size();
        int low=0,high=(m*n)-1, midval=0,mid=0;
        
        while(high>=low){
            mid=low+(high-low)/2;
            midval=matrix[mid/n][mid%n];
            if(midval==target){
                    return true;
            }   
            else if(midval > target){
                    high=mid-1;
            }
            else{
                low=mid+1;
            }   
        }
            return false;
    }
   
};
