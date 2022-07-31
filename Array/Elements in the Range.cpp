	class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		unordered_map<int,int> mp;
		if(B-A+1 > n) return false;
		for(int i=0;i<n;i++){
		    mp[arr[i]]=i;
		}
		for(int i=A;i<=B;i++){
		    if(mp.find(i)!=mp.end()){
		        continue;
		    }
		    else{
		        return false;
		    }
		}
		return true;
	}
};
