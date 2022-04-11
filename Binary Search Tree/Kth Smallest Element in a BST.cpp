class Solution {
public:
    int solve(TreeNode* &root,int& i,int k){
        //base case
        if(root==NULL){
            return -1;
        }
        //inorder traversal
        int left=solve(root->left,i,k);
        if(left!=-1){
            return left;
        }
        i++;
        if(i==k){
            return root->val;
        }
        // for right part
        return solve(root->right,i,k);
    }
    int kthSmallest(TreeNode* root, int k) {
       int i=0;
       int ans=solve(root,i,k); 
        return ans;
    }
};
