
#include <bits/stdc++.h>

using namespace std;

void countsort(int v[],int n){
    // for number of pass
    int output[10],count[10];
    int maxi=v[0];
    // find maximum element
    for(int i=1;i<n;i++){
        if(v[i]>maxi) maxi=v[i];
    }
    // initialize count array with 0
    for(int i=0;i<maxi;i++){
        count[i]=0;
    }
    // increase count in count array
    for(int i=0;i<n;i++){
        count[v[i]]++;
    }
     //store cumulative count in array
    for(int i=1;i<=maxi;i++){
        count[i]+=count[i-1];
    }
     // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for(int i=n-1;i>=0;i--){
      output[count[v[i]]-1]=v[i];
      count[v[i]]--;
  }
  for(int i=0;i<n;i++){
      v[i]=output[i];
  }
}
void printarray(int v[],int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
   
}
int main()
{
   int v[]={1,7,9,5,0,3,6,8,9,2};
    int n=sizeof(v)/sizeof(v[0]);
    countsort(v,n);
    cout<<"print array ";
    printarray(v,n);
    return 0;
}
