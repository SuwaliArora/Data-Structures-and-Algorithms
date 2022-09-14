class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;
       for(auto i:arr1){
           count++;
           for(auto j:arr2){
                if(abs(abs(i-j) <= d)){
                  count--;
                  break;  
                } 
            }
        }
        return count;
    }
};
