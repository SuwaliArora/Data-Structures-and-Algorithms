class Solution {
	public:
		int NthTerm(int n){
		    long v=2,mult=2;
		    for(int i=2;i<=n;i++){
		        v=(v*mult + 1)% 1000000007;
		        mult++;
		    }
		    return v;
		}

};
