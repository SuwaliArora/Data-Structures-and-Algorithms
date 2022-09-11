// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 
vector<int> solve(vector<int>& v, Node* root){
    if(root == NULL){
       return v;
   }
    solve(v,root->left);
    v.push_back(root->data);
    solve(v,root->right);
    return v;
}
int sum(Node* root, int k) 
{ 
  
   vector<int> v;
   v=solve(v,root);
   int sum=0;
   if(v.size()<k) return 0;
   for(int i=0;i<k;i++) sum+=v[i];
   return sum;
} 
