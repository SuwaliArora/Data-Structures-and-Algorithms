struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    
    bool static comp(Job a,Job b){
        return (a.profit > b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // sorting based on profits
        sort(arr,arr+n,comp);
        // find maximum deadline
        int maxi=arr[0].dead;
        for(int i=1;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        // create at array to store job id
        vector<int> ans;
        int slot[maxi+1];
        
        for(int i=0;i<=maxi;i++){
            slot[i]= -1;
        }
        int countjobs=0,profits=0;
        
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                // if ith slot is filled, check for smaller slots
                if(slot[j]== -1){
                    slot[j]=i;
                    countjobs++;
                    profits+=arr[i].profit;
                    break;
                }
            }
        }
        ans.push_back(countjobs);
        ans.push_back(profits);
        return ans;
    } 
};
// time complexity= O(nlogn)+O(n*m)----- m is the maximum slot
// space complexity= O(m) 
