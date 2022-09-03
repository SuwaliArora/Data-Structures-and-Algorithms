class Solution {
public:
    int mySqrt(int x) {
        int low=1,high=x,ans=0;
        
        while(high>=low){
            // runtime error in mid=(low+high)/2
             long long int mid= low+(high-low)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid < x) {
                low=mid+1;
                ans=mid;
            }
            else high=mid-1;
        }
        return ans;
    }
};
