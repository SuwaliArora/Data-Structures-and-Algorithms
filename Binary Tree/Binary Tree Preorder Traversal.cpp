class Solution {
public:
        void preorder(TreeNode* root, vector<int> &ans) {
            if(root==NULL) return;
            ans.push_back(root->val) ;
            // recursive call for left node
            preorder(root->left, ans) ;
            // recursive call for right node
            preorder(root->right, ans) ;
            
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root, ans) ;
        return ans;
    }
};
