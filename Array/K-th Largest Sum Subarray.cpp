#include<algorithm>

int getKthLargest(vector<int> &arr, int k)
{
	//	Write your code here.
    vector<int> sumstore;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            sumstore.push_back(sum);
        }
    }
    sort(sumstore.begin(),sumstore.end());
    return sumstore[sumstore.size()-k];
}
