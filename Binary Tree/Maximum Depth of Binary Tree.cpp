class Solution {
public:
    int maxDepth(TreeNode* root) {
        //base condition
         if(root==NULL) return 0;
        
        //recursive call
        int lefth=maxDepth(root->left);
        int righth=maxDepth(root->right);
        
        int ans=max(lefth,righth)+1;  //+1 to add root node
        return ans;
    }
    
};
