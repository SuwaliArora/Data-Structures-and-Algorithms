#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &v,int p,int q,int r){
    int n1=q-p+1, n2=r-q;
    int l[n1],m[n2];
    
    for(int i=0;i<n1;i++)
        l[i]=v[p+i];
    for(int j=0;j<n2;j++)
        m[j]=v[q+1+j];

    int i=0,j=0,k=p;

    while(i<n1 && j<n2){
        if(l[i]<=m[j]){
           v[k]=l[i];
           i++;
        } 
        else{
        v[k]=m[j];
           j++;
        }
        k++;
    }
    while(i<n1){
         v[k]=l[i];
           i++;
           k++;
    }
    while(j<n2){
         v[k]=m[j];
           j++;
           k++;
    }
}
void mergesort(vector<int> &v,int low,int high){
    if(low<high)
    {
        int mid=low+(high-low)/2;
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);

    merge(v,low,mid,high);
    }
}
void printarray(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v{1,7,9,5,0,3,6,8,9,2};
    int n=v.size();
    mergesort(v,0,n-1);
    cout<<"print array ";
    printarray(v,n);
    return 0;
}
