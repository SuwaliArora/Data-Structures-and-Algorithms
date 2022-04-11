// Iterative approach(Optimized)
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root){
            if(root->val < p->val && root->val < q->val){
            // nodes are in right subtree
            root=root->right;
            }
            else if(root->val > p->val && root->val > q->val){
             // nodes are in left subtree
             root=root->left;
             }
         else{
             // root in between of two nodes 
           return root;
         }
           
    }
        return root;
   }
};

// Time Complexity=O(N)
// space complexity=O(1)
