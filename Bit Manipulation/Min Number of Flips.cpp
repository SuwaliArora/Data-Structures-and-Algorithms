int minFlips (string s)
{
    int count1=0,count2=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(i%2==0 && s[i]!='0') count1++;
        else if(i%2==1 && s[i]=='0') count1++;
    }
    for(int i=0;i<n;i++){
        if(i%2==0 && s[i]=='0') count2++;
        else if(i%2==1 && s[i]!='0') count2++;
    }
    return min(count1,count2);
}
