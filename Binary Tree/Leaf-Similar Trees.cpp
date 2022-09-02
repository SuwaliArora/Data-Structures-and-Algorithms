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
    void solve(TreeNode* root,vector<int> &arr){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) 
            arr.push_back(root->val);
        
        if(root->left) solve(root->left,arr);
        if(root->right) solve(root->right,arr);
      
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> first,second;
        solve(root1,first);
        solve(root2,second);
        
        if(first.size()!=second.size()) return false;
        int n=first.size();
        for(int i=0;i<n;i++){
            if(first[i]!=second[i]){
                return false;
            }
        }
        return true;
    }
};
