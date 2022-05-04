vector<int> permute(vector<vector<int>> &arr, int n)
{
    vector<int> ans;
    for(int i=0;i<n;i++){
        arr[i][0]=arr[i][0]+arr[i][1];   // 1st column will contain sum of time and time to complete  order
        arr[i][1]=i+1;  // 2nd column will contain order number
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        ans.push_back(arr[i][1]);
    }
    return ans;
}
