void inorderval(TreeNode<int>* root, vector<int> &inorder){
	//base case
	if(root==NULL){
		return;
	}
	inorderval(root->left,inorder);
	inorder.push_back(root->data);
	inorderval(root->right,inorder);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    
	vector<int> inorder;
	//store inorder sorted values
	inorderval(root,inorder);
	int n=inorder.size();
	
	// new root to point the linked list
	TreeNode<int>* newroot= new TreeNode<int>(inorder[0]);
    
	TreeNode<int>* curr=newroot;
	for(int i=1;i<n;i++){
		// create new node with element at ith index
		TreeNode<int>* temp= new TreeNode<int>(inorder[i]);
		curr->left=NULL;
		curr->right=temp;
		curr=temp;
	}
	// 3rd step
	curr->left=NULL;
	curr->right=NULL;
	
	return newroot;
	}
