class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int n=digits.size(),carry=0;
        if(n==0) return result;
        int i=n-1;
        digits[n-1]+=1;
        if(digits[n-1]>9){
            carry=digits[n-1]/10;
            digits[n-1]=digits[n-1]%10;
        }
        result.push_back(digits[n-1]);
        for(i=n-2;i>=0;i--){
            digits[i]+=carry;
            carry=digits[i]/10;
            result.push_back(digits[i]%10);
        }
        if(carry==1)
        result.push_back(carry);
        reverse(result.begin(),result.end());
        return result;
    }
};
