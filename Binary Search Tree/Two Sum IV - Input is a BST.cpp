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
    vector<int> inorder(TreeNode* root,vector<int> &ans){
        if(!root) return ans;
        if(root->left) inorder(root->left,ans);
        ans.push_back(root->val);
        if(root->right) inorder(root->right,ans);
        return ans;
    }
    bool findTarget(TreeNode* root, int k) {
       if(!root) return root;
        vector<int> ans;
        ans=inorder(root,ans);
        
        int n=ans.size();
        int low=0,high=n-1;
        while(low<high){
            if(ans[low]+ans[high]==k) return true;
            else if(ans[low]+ans[high]>k) high--;
            else low++;
        }
        return false;
    }
};
