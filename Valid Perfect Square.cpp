class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=num;
        while(high>=low){
            // runtime error in mid=(low+high)/2
             long long int mid= low+(high-low)/2;
            if(mid*mid==num) return true;
            else if(mid*mid < num) {
                  low=mid+1;
            }
            else high=mid-1;
        }
        return false;
    }
};
