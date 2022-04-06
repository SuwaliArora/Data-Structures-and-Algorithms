class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left){
                TreeNode* prev=curr->left;
                while(prev->right){
                    // to find predecessor
                    prev=prev->right;
                }
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left=NULL;         // make left of every node NULL
            }
            curr=curr->right;
        
        }
    }
};

// time complexity= O(n) one time traversal
// space complexity= O(1) 
