class Solution {
public:
    vector<int> nextSmaller(vector<int>& arr, int n){
        // Write your code here.
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=n-1;i>=0; i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        //ans=stack's top
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
    }
    
    vector<int> prevSmaller(vector<int>& arr, int n){
        // Write your code here.
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=0;i<n; i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){
            s.pop();
        }
        //ans=stack's top
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n);
        next=nextSmaller(heights,n); //O(n)
        
        vector<int> prev(n);
        prev=prevSmaller(heights,n);  //O(n)
        int area=INT_MIN;  
        
        for(int i=0;i<n;i++){   //O(n)
            int l=heights[i];  //length is constant
            if(next[i]==-1) {
                next[i]=n;
            } //prev can be -1 but next can't
            int b=next[i]-prev[i]-1;
            
            int newArea=l*b;
            area=max(area,newArea);
        }
        return area;
        
    }
};

//T.C= O(n)+O(n)+O(n)= O(n)
//S.C= O(n)    for extra space stack
