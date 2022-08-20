class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        int n=X.length(),m=Y.length(),sum=0,carry=0;
        string ans="";
        int i=n-1,j=m-1;
        while(i>=0 && j>=0){
            int t=X[i]-'0' + Y[j]-'0' + carry;
            ans+=to_string(t%10); // convert last digit into string and add
            carry=t/10;
            i--;
            j--;
        }
        while(i>=0){
            int t=X[i]-'0' + carry;
            ans+=to_string(t%10); // convert last digit into string and add
            carry=t/10;
            i--;
        }
        while(j>=0){
            int t=Y[j]-'0' + carry;
            ans+=to_string(t%10); // convert last digit into string and add
            carry=t/10;
            j--;
        }
        // if carry left
        if(carry!=0)
            ans+=to_string(carry);
            
        // get rid of leading zeros
        while(ans.size()>0 && ans.back()=='0'){
            ans.pop_back();
        }
        // back() function is used to access last character directly
        
        if(ans.size()==0) return "0";
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
