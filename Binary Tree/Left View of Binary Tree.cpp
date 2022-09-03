struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
void solve(Node *root,vector<int> &res,int level){
    if(root==NULL) return ;
    
    // we entered the new level
    if(res.size()==level) res.push_back(root->data);
    
    solve(root->left,res,level+1);
    solve(root->right,res,level+1);
}

vector<int> leftView(Node *root)
{
   vector<int> res;
   solve(root,res,0);
   return res;
}
