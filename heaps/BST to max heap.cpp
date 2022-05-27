class Solution{
  public:
  // function to find inorder of bst
  void inorder(Node* root, vector<int> &arr){
      if(root==NULL) return;
      
      inorder(root->left,arr);  // recursive call for left subtree
      arr.push_back(root->data);
      inorder(root->right,arr);  // recursive call for right subtree
  }
  // function to create mac heap from inorder
  void bsttoheap(Node* root, vector<int> &arr, int &n){
     
      if(root==NULL) return;
      
      // postorder tarversal will give max heap
      bsttoheap(root->left,arr,n);     // recursive call for left subtree
      bsttoheap(root->right,arr,n);   // recursive call for right subtree
      root->data=arr[n++];
  }
    void convertToMaxHeapUtil(Node* root)
    {
         vector<int> arr;  // array to store inorder of bst
         inorder(root,arr); 
         int n=0;
         bsttoheap(root,arr,n);
    }    
};
