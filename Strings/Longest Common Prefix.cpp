class Solution {
public:
    string commonprefix(string str1,string str2){
        string result="";
        int n1=str1.length(),n2=str2.length();
        for(int i=0,j=0;i<n1,j<n2;i++,j++){
            if(str1[i]!=str2[j]){
                break;
            }
            result+=str1[i];
        }
        return result;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            prefix=commonprefix(prefix,strs[i]);
        }
        return prefix;
    }
};
