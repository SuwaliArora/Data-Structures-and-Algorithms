class Solution {
  public:
  int countnode(struct Node* root){
      // base condition
      if(root==NULL) return 0;
      
      int ans=1+ countnode(root->left) + countnode(root->right);
      return ans;
  }
  
  bool isCBT(struct Node* root, int index, int cnt){
      // base condition
      if(root==NULL) return true;
      
      if(index>=cnt){
          return false;
      }
      else{
          // 0-based indexing
          bool left=isCBT(root->left, 2*index + 1,cnt);
          bool right=isCBT(root->right, 2*index + 2,cnt);
          return (left && right);
      }
  }
  bool ismaxOrder(struct Node* root){
      // base condition
      // if leaf node
      if(root->left==NULL && root->right==NULL) return true;
      
      // if only left child exist
      if(root->right==NULL){
          return (root->data > root->left->data);
      }
      else{
          // 0-based indexing
          bool left=ismaxOrder(root->left);
          bool right=ismaxOrder(root->right);
          return (left && right && (root->data > root->left->data) && root->data > root->right->data);

      }
  }
  
    bool isHeap(struct Node* root) {
        // code here
        int index=0;
        int n=countnode(root);
        if(isCBT(root,index,n) && ismaxOrder(root)){
            return true;
        }
       else{
           return false;
       }
    }
};
