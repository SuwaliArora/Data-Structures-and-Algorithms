class Solution{   
public:
     int getOddOccurrence(int arr[], int n) {
        // to find odd occurrence we will do xor, xor of same number is 0
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=arr[i];
        }
        return ans;
    }
};
