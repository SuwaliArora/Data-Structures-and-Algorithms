class Solution {
public:
    bool isBST(TreeNode* &root, long min,long max){
        //base case
        if(root==NULL){
            return true;
        }
        if(root->val <= min || root->val >= max){
            return false;
        }
            // recursive call for left subtree
            bool left=isBST(root->left,min,root->val);
            
            // recursive call for right subtree
            bool right=isBST(root->right,root->val,max);
            return left && right;
    }
    bool isValidBST(TreeNode* root) {
        //function call
        return isBST(root,LONG_MIN,LONG_MAX);
    }
};


// Time complexity= O(n) as we have traverse each node only once
// S.C= O(height) for recursive call stack in average case
= O(n) if skew tree
