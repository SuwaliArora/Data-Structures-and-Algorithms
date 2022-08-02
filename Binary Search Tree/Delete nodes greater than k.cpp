class Solution{
  public:
    /*The function should return the root of the modified tree*/
    Node* deleteNode(Node* root, int k)
    {
        if(root==NULL) return root;
        if(root->data==k){
            return (root->left);
        }
       // if root value is greater than k, then we don't have to visit right subtree as every value at right subtree will be greater than k
        if(root->data > k){
            // recursive call for left subtree
            return deleteNode(root->left,k);
        }
        if(root->data < k){
            // recursive call for right subtree
            root->right=deleteNode(root->right,k);
        }
        return root;
    }
};
