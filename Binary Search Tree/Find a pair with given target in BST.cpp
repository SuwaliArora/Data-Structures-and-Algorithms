class Solution{
    // function for inorder traversal 
    void inordertraversal(struct Node *root, vector<int> &inorder){
        // base case
        if(root==NULL){
            return;
        }
        //recursive call for left subtree
        inordertraversal(root->left,inorder);
        // insert elements in vector
        inorder.push_back(root->data);
        // recursive call for right subtree
        inordertraversal(root->right, inorder);
    }
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target)
    {
    vector<int> inorder;
    inordertraversal(root,inorder);
    
    // 2-pointer approach for finding tha pair
    int i=0,j=inorder.size()-1;
    while(i<j){
        int sum=inorder[i]+inorder[j];
        if(sum==target){
            return 1;
        }
        if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
    }
};
