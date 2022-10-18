class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> a)
	{
		vector<int> res;
		res.push_back(a[0][0]);
		int r=0,c=1;
		while(c<n){
		    int i=r,j=c;
		    // col -1 reduce krenge aur row increase krenge
		    while(j>=0 && i<n){
		        res.push_back(a[i][j]);
		        i++;
		        j--;
		    }
		    c++;
		}
		c=n-1,r=1;
		while(r<n){
		    int i=r,j=c;
		    while(j>=0 && i<n){
		        res.push_back(a[i][j]);
		        i++;
		        j--; 
		    }
		    r++;
		}
		return res;
	}
};
