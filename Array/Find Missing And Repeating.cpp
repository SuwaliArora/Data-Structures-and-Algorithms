#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	
    int xor1=arr[0];
    int x=0; // missing 
    int y=0; // repeated
    // xor of all array elements
    for(int i=1;i<n;i++){
        xor1=xor1 ^ arr[i];
    }
    // xor the result with 1 to n
    for(int i=1;i<=n;i++){
        xor1=xor1 ^ i;
    }
    // get the rightmost set bit of above result
    int setbit= xor1 & ~(xor1-1);
    
    /* Now divide elements into two sets by comparing a rightmost set bit of xor1 with the bit at the same position in each element. Also, get XORs of two sets. The two XORs are the output elements. */
    for(int i=0;i<n;i++){
        if(arr[i] & setbit){
            x=x^arr[i];  // arr[i] belongs to first set
        }
        else{
            y=y^arr[i];// arr[i] belongs to second set
        }
    }
    for(int i=1;i<=n;i++){
        if(i & setbit){
            x=x^i;  // i belongs to first set
        }
        else{
            y=y^i;// i belongs to second set
        }
    }
    
    // get the repeated and missinf number
    int xcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x) xcount++;
    }
    if(xcount==0) {
        return {x,y};
    }
    return {y,x};
    
}
