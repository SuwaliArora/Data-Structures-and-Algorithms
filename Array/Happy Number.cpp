class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        if(n==0 || n==2 || n==3) return false;
        unordered_map<int,int> mp;
        while(true){
            int res=0;
            while(n>0){
                int rem=n%10;
                res+=rem*rem;
                n=n/10;
            }
            if(res==1) return true;
            // number is already checked
            if(mp[res]==1) return false;
            mp[res]=1;
            n=res;
        }
    }
};
