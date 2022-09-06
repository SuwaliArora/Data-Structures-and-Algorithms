#include <bits/stdc++.h>

using namespace std;

void bubblesort(vector<int> &v,int n){
    // base case, if  0 or 1 element in array is present
    if(n==0 || n==1) return;
    // for number of pass
    for(int j=0;j<n-1;j++){
        if(v[j]>v[j+1]) swap(v[j],v[j+1]);
    }
    // recursive call
    bubblesort(v,n-1); 
}
void printarray(vector<int> v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v{1,7,9,5,0,3,6,8,9,2};
    int n=v.size();
    bubblesort(v,n);
    cout<<"print array ";
    printarray(v,n);

    return 0;
}
