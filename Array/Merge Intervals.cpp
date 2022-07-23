class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedintervals;
        // if input array has no intervals;
        if(intervals.size()==0){
            return mergedintervals;
        }
        sort(intervals.begin(), intervals.end());
        // temparory array for storing array at 0-index
        vector<int> tempinterval= intervals[0];
        
        for(auto it: intervals){
            if(it[0] <= tempinterval[1]){
                tempinterval[1]=max(it[1], tempinterval[1]);
            }
            else{
                mergedintervals.push_back(tempinterval);
                tempinterval=it;
            }
        }
        mergedintervals.push_back(tempinterval);
        return mergedintervals;
    }
};

// time complexity= O(nlogn)(for sorting) + O(n)(for mergeing)
//Space complexity= O(n) in worst case for merging
