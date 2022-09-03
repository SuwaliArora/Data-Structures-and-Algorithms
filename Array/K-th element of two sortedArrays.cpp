// conditions: l1<=r2 && l2<=r1

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        // binary search will be performed on smallest array
        if(n>m) return kthElement(arr2,arr1,m,n,k);
        
        int low=(0,k-m),high=min(k,n); // for edge case
        
        while(low<=high){
            int mid1=low+(high-low)/2;
            int mid2=k-mid1;
            int l1 = mid1==0 ? INT_MIN : arr1[mid1-1];
            int l2 = mid2==0 ? INT_MIN : arr2[mid2-1];
            int r1 = mid1==n ? INT_MAX : arr1[mid1];
            int r2 = mid2==m ? INT_MAX : arr2[mid2];
            
            if(l1<=r2 && l2<=r1) return max(l1,l2);
            
            else if(l1>r2) high=mid1-1;
            else low=mid1+1;  
        }
        return 1;
    }
};
