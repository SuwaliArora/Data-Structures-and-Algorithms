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
    
    int solve(TreeNode* root,int &count,int max){
        if(!root) return 0;
        
        // preorder traversal
        // check if any node has element greater than itself in the path
        if(root->val >= max){
            count++;
            max=root->val; 
        }
        
        // recursive calls
        int left=solve(root->left,count,max);
        int right=solve(root->right,count,max);
        
        return count;
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int count=0,max=INT_MIN;
        return solve(root,count,max);
    }
};
