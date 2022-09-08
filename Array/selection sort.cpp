// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

void selectionsort(vector<int> &v,int n){
    // for number of pass
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;i<n;i++){  
            if(v[j]<v[minindex]) minindex=j;
        }
        swap(v[minindex],v[i]);
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
    selectionsort(v,n);
    cout<<"print array ";
    printarray(v,n);
    return 0;
}


// tc=O(n^2)
