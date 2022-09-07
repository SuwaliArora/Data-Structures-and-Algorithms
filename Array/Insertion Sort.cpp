#include <bits/stdc++.h>

using namespace std;

void insertionsort(vector<int> &v,int n){
    // for number of pass
    for(int i=1;i<n;i++){
       int key=v[i];
       int j=i-1;
       while(j>=0 && v[j]>key){
           v[j+1]=v[j];
           j--;
       }
       v[j+1]=key;
    }
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
    insertionsort(v,n);
    cout<<"print array ";
    printarray(v,n);
    return 0;
}

/* 
Time Complexity: O(N^2) 
Auxiliary Space: O(1)

Insertion sort takes maximum time to sort if elements are sorted in reverse order. And it takes minimum time (Order of n) when elements are already sorted.  */
