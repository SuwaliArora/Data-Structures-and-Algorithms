class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        // recursive calls for left/right subtrees
        int lefth=minDepth(root->left);
        int righth=minDepth(root->right);
        
        if(!root->left && !root->right) return 1;
        if(!root->left) return 1+righth;
        if(!root->right) return 1+lefth;
        int ans=min(righth,lefth)+1;
        return ans;
    }
};
