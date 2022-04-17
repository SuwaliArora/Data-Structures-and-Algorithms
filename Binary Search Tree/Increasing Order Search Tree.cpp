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
    // create search tree from inorder traversal, it will be balanced
    TreeNode* inordertost(int index,  vector<int> inorder){
        //base case
        if(index==inorder.size()){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(inorder[index]);
        root->left= NULL;
        root->right= inordertost(index+1, inorder);  // recursive call
        return root;
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> inorder;
        inordertrav(root, inorder) ;

        return inordertost(0,inorder);
    }
};
