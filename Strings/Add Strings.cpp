class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1,j=num2.size()-1,sum=0;
        string s="";
        
        while(i>=0 || j>=0 || sum!=0){
            if(i>=0){
                sum+=(num1[i]-'0');  // ascii value of 0 is 48  
                    // num1[i]-'0' will be converted to string value
                i--;
            }
            if(j>=0){
                sum+=(num2[j]-'0');
                j--;
            }
            s+=(char)(sum%10 + '0'); // sum%10 + '0' will convert int to char
            sum=sum/10;
        }
        reverse(s.begin(),s.end());  // string is in reverse 
        return s;
    }
};
