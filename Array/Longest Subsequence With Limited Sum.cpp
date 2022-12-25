class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size(),m=queries.size();
        vector<int> presum;
        int sum=0;
        sort(nums.begin(),nums.end());
        // calculate prefix sum and store in array
        for(int i=0;i<n;i++){
            sum+=nums[i];
            presum.push_back(sum);
        }
        
        vector<int> ans(m,0);
        // calculate the number of elements
        for(int i=0;i<m;i++){
             for(int j=0;j<n;j++){
                 if(presum[j]<=queries[i]) ans[i]=j+1;
                 else break;
             }
        }
        return ans;
    }
};
