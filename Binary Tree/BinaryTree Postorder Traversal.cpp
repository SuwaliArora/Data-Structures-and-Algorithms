/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root, ans) ;
        return ans;
    }

  void postorder(TreeNode* root, vector<int> &ans) {
            if(root==NULL) return;
             
            // recursive call for left node
            postorder(root->left, ans) ;
            // recursive call for right node
            postorder(root->right, ans) ;
      ans.push_back(root->val);
            
  }
};
