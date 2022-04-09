class Solution {
public:
    bool solve(TreeNode* a, TreeNode* b) {
        //if a and b are null, then symmetric
        if(a==NULL && b==NULL) {
            return true;
        }
        else if(a==NULL || b==NULL) {
            return false;
        }
        if(a->val != b->val) {
            return false;
        }
        
        //recursive call
        return solve(a->left, b->right) && solve(a->right, b->left) ;
    }
    bool isSymmetric(TreeNode* root) {
        // empty root is also symmetric
        if(root==NULL) return true;
        return solve(root->left, root->right) ;
    }
};
