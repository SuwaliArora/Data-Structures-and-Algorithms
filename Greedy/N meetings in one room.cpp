class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        pair<int,int> a[n+1];
        int i;
        for(i=0;i<n;i++){
            a[i].first=end[i];  // in pair, store end time of meeting
            a[i].second=i;  // for each end time, store meeting number
        }
        sort(a,a+n);
        // store time limit to check if next meet can be conducted or not
        int limit=a[0].first;
        int count=1;// as 1st meet will always be conducted
  
        // check for all meets
        for(i=1;i<n;i++){
            if(start[a[i].second]>limit){
                count++;
                // update time limit
                limit=a[i].first;
            }
        }
        return count;
    }
};
