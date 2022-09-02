class Solution {
public:
    int countGoodSubstrings(string s) {
        
        if(s.length()<3) return 0;
        
        int start=0,end=2,count=0;
        int n=s.length();
        while(end<n){
            bool flag=false;
            bool check[26]={false};
            for(int i=start;i<=end;i++){
                
                if(check[s[i]-'a']){
                    flag=true;
                    break;
                }
                else{
                    check[s[i]-'a']=true;
                } 
            }
            if(!flag){
                 count++;
             //   cout<<start<<endl;
            }
           
            start++,end++;
        }
        return count;
    }
};
