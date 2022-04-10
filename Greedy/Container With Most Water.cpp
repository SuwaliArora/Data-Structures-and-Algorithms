class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=INT_MIN;
        int n=height.size();
        int i=0, j=n-1;
        while(i<j){
            int x=j-i;
            int y=min(height[i],height[j]);
            int area=x*y;
            maxarea=max(area,maxarea);
            if(height[j]>height[i]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};
