class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==0) return 0;
        
        // sorting based on end time
        sort(points.begin(),points.end(),comp);

        int count=1;
        int last=points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]>last){
                count++;
                last=points[i][1];
            }
        }
        return count;
    }
};
