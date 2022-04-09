class Solution {
public:
    TreeNode* solve(TreeNode* &root, int val) {
        if(root==NULL) {
            return NULL;
            }
        else if(root->val> val) {
            return solve (root->left, val) ;
        }
        else if(root->val < val) {
            return solve (root->right,val) ;
        }
        else {
            return root; // root-> val==val
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans=solve(root, val) ;
        return ans;
    }
};
