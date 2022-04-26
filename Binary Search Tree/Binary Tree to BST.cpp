class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    // inorder traversal of binary tree
    void inorder(Node *root,vector<int> &ans){
        //base case
        if(root==NULL){
            return;
        }
        // recursive call for left
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
        
    }
    // create binary search tree from inorder traversal, it will be balanced
    void inordertobst(Node *root,int &index, vector<int> &ans){
       //base case
        if(root==NULL){
            return;
        }
        
        inordertobst(root->left,index,ans);
        root->data=ans[index];
        index++;
        inordertobst(root->right,index,ans);
        
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        if(root==NULL) return root;
        vector<int> ans;
        inorder(root,ans);
        // sort the ans array and it is the inorder of bst
        sort(ans.begin(),ans.end());
        int index=0;
        inordertobst(root, index,ans);
        return root;
    }
};
