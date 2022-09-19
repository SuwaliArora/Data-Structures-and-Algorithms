class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int> ans;
        int n=nums.size();
        int xors=nums[0];
        for(int i=1;i<n;i++){
            xors=xors^nums[i];
        }
        int rightbit= xors & ~(xors-1);
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(nums[i] & rightbit) x=x^nums[i];
            else y=y^nums[i];
        }
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
