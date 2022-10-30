class Solution {
public:
    string digitSum(string s, int k) {
        if(s.length()<=k) return s;
        int n=s.length();
        int i=0;
        string str="";
        while(i<n){
            int sum=0,count=0;
            // i<n vali condition isiliye kyoki last me substring ke terminate ke liye
            while(i<n && count<k){
                sum+=(s[i]-'0');
                count++;
                i++;
            }
            str+= to_string(sum);
        }
        return digitSum(str,k);
    }
};
