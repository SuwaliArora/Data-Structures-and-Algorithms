class Solution {
public:
    TreeNode* solve(vector<int>& nums, int low, int high){
        if(nums.size()==0 || low>high) return NULL;
        int mid=low+(high-low)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=solve(nums,low,mid-1);
        root->right=solve(nums,mid+1,high);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size()-1;
        return solve(nums,0,n);
    }
};
