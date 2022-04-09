class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //base case
        if(root==NULL) {
            return new TreeNode(val);  // root = new TreeNode(val);
        }
        if(root->val > val){
            root->left= insertIntoBST(root->left,val);
        }
        else{
            root->right= insertIntoBST(root->right,val);
        }
        return root;
    }
};
