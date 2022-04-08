class Solution {
public:
    void inorder(TreeNode* root, vector<int> &ans) {
        //base case
        if(root==NULL) return;
        inorder(root->left, ans);    // recursive call
        ans. push_back(root->val) ;
        inorder(root->right,ans);    // recursive call
        }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans) ;
        return ans;
    }
};
