class Solution {
public:
    // inorder traversal
    void inordertrav(TreeNode* root, vector<int> &inorder) {
        if(root==NULL) 
            return;
        
        inordertrav(root->left, inorder) ;
        inorder.push_back(root->val) ;
        inordertrav(root->right,inorder); 
            
    }
    
    // create bst from inorder traversal, it will be balanced
    TreeNode* inordertobst(int start,int end,  vector<int> inorder){
        //base case
        if(start>end){
            return NULL;
        }
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(inorder[mid]);
        root->left= inordertobst(start,mid-1, inorder);
        root->right= inordertobst(mid+1,end, inorder);
        return root;
        
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> inorder;
        inordertrav(root, inorder) ;
        int n=inorder.size();
        
        return inordertobst(0,n-1,inorder);
    }
};
