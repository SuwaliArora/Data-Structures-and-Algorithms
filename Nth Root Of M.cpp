double multiply(double number, int n){
    double ans=1.0;
    for(int i=0;i<n;i++){
        ans=ans*number;
    }
    return ans;
}
double findNthRootOfM(int n, int m) {
	double low=1, high=m;
    double eps=1e-8; // to find the number of decimal places
    
    while(high-low > eps){
        double mid= (low+high)/2.0;
        if(multiply(mid,n)< m) low=mid;
        else high=mid;
    }
    return low;
}

// time complexity= N x log(M x 10^d) d is number of decimal places
