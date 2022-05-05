class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL) return NULL;
        
        if(root1!=NULL && root2!=NULL){
            root1->val += root2->val;
            root1->left= mergeTrees(root1->left,root2->left);
            root1->right= mergeTrees(root1->right,root2->right);
        }
        if(root1==NULL && root2!=NULL){
            return root2;
        }
        if(root1!=NULL && root2==NULL){
            return root1;
        }
        return root1;
    }
};
