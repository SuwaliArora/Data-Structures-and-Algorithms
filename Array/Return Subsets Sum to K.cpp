void find(int idx,int n,int k,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans){
    if(idx==n){
        if(k==0){
        ans.push_back(ds);
        }
        return;
    }
       else 
       { 
           ds.push_back(arr[idx]);
            find(idx+1,n,k-arr[idx],arr,ds,ans);
            ds.pop_back();
            find(idx+1,n,k,arr,ds,ans);
       }
        
    }

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<int>ds;
    vector<vector<int>>ans;
    find(0,n,k,arr,ds,ans);
    
    return ans;
}
