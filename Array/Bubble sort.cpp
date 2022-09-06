#include <bits/stdc++.h>

using namespace std;

void bubblesort(vector<int> &v,int n){
    // for number of pass
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]) swap(v[j],v[j+1]);
        }
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
    bubblesort(v,n);
    cout<<"print array ";
    printarray(v,n);
    return 0;
}

/* For the Worst case:
Total number of swaps = Total number of comparison
Total number of comparison (Worst case) = n(n-1)/2
Total number of swaps (Worst case) = n(n-1)/2

Worst and Average Case Time Complexity: O(N2). The worst case occurs when an array is reverse sorted.
Best Case Time Complexity: O(N). The best case occurs when an array is already sorted.
Auxiliary Space: O(1) */
