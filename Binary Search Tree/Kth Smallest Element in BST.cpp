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
    vector<int> solve(vector<int>& v, TreeNode* root){
    if(root == NULL){
       return v;
   }
    solve(v,root->left);
    v.push_back(root->val);
    solve(v,root->right);
    return v;
}
    int kthSmallest(TreeNode* root, int k) {
         vector<int> v;
         v=solve(v,root);
         if(v.size()<k) return 0;
              return v[k-1];
    }
};
