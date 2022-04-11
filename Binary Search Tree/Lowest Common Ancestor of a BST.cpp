// recursive Approach
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // base case
        if(root==NULL){
            return NULL;
        }
        if(root->val < p->val && root->val < q->val){
            // nodes are in right subtree
            return lowestCommonAncestor(root->right, p,q);
        }
        else if(root->val > p->val && root->val > q->val){
            // nodes are in left subtree
            return lowestCommonAncestor(root->left, p,q);
        }
       else{
           // root in between of two nodes 
           return root;
       } 
    }
};


//Time Complexity: O(N)
//Space Complexity: O(height) because of recursive call stack
