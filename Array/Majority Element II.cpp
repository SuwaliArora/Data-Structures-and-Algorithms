class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int i;
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>n/3){
                break;
            }
        }
        return nums[i];
        
    }
};
