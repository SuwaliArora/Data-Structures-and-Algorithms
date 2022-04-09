class Solution {
public:
    string reverseWords(string s) {
        int count=0,i=0,j=0,temp=0;
        int n=s.size();
        while(i<n){
            if(s[i]!=' '){
                count++;
                temp=count;
            }
             i++;
            //check if 'i' reaches to the end of string or s[i] is space
             if(s[i]==' ' || i==n){
                while(j<count){
                    swap(s[j],s[count-1]);     //swapping of characters of each word   
                    count--,j++;      //move count pointer backwards and j pointer forward
                }
                 count=temp+1; //store count as original
                 j=count;
            }
           
        }
