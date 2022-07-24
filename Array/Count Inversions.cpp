#include <bits/stdc++.h> 

long long mergesort(long long *arr, long long temp[],long long left,long long mid,long long right){
    long long countinv=0,i=left,j=mid,k=left; // k is used to keep index of temp array
    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j])
              temp[k++]=arr[i++];
        
        else{
            temp[k++]=arr[j++];
            countinv=countinv+(mid-i);
        }
    }
    while(i<=mid-1){
         temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(int i=left;i<=right;i++){
        arr[i]=temp[i];
    }
    return countinv;
}
long long merge(long long *arr, long long temp[],int left,int right){
    long long countinv=0,mid;
    if(left< right){
        mid=(left+right)/2;
        
        countinv+=merge(arr,temp,left,mid);
        countinv+=merge(arr,temp,mid+1,right);
        
        countinv+=mergesort(arr,temp,left,mid+1,right);
    }   
     return countinv;   
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long temp[n];
    long long ans= merge(arr,temp,0,n-1);
    return ans;
   
}
