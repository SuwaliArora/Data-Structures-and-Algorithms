class Solution {
  public:
    void reArrange(int arr[], int N) {
        // code here
        int i=0,j=1;
        while(i<N && j<N){
              if(arr[i]%2==0 && arr[j]%2!=0){
                  i+=2,j+=2;
              }
              else if(arr[i]%2==0) i+=2;
              else if(arr[j]%2!=0) j+=2;
              else{
                  swap(arr[i],arr[j]);
                  i+=2,j+=2;
              }
        }
    }
};
