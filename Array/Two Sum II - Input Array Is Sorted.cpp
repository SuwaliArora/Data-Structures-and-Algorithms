class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> Sum;
        int mid,low=0;
        int high=numbers.size()-1;
        //to reduce the number of traversal(one time division of array)
        mid=low+(high-low)/2;
        if(numbers[mid+1]>target){
            high=mid+1;
        }
        for(int i=0,j=high;i<j;){
            if(numbers[i]+numbers[j]==target){
                Sum.push_back(i+1);
                Sum.push_back(j+1);
                return Sum;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
        }
       return {};
    }
};
