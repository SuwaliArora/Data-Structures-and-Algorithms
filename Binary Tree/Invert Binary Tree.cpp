class Solution {
public:
    void solve(TreeNode* root) {
        //if a and b are null, then symmetric
        if(root==NULL) {
            return;
        }
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        
        //recursive call
        solve(root->left);
        solve(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        // empty root 
        if(root==NULL) return NULL;
        
        solve(root) ;
        return root;
    }
};
