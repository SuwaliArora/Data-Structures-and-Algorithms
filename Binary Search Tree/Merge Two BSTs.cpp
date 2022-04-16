// inorder traversal
    void inordertrav(TreeNode<int>* root, vector<int> &inorder) {
        if(root==NULL) 
            return;
        
        inordertrav(root->left, inorder) ;
        inorder.push_back(root->data) ;
        inordertrav(root->right,inorder); 
            
    }
// function to merge array
vector<int> mergearray(vector<int> &a,vector<int> &b){
	 // array of size of a+b
	 vector<int> ans(a.size() + b.size());
	int i=0,j=0,k=0;
	while(i<a.size() && j<b.size()){
		if(a[i]<=b[j]){
			ans[k]=a[i];
			i++,k++;
		}
		else{
			ans[k]=b[j];
			j++,k++;
		}
	}
	// if elements are remaining in array a
	while(i<a.size()){
		ans[k++]=a[i];
		i++;
	}
	// if elements are remaining in array b
	while(j<a.size()){
		ans[k++]=b[j];
		j++;
	}
	return ans;
}
// create bst from inorder traversal, it will be balanced
    TreeNode<int>* inordertobst(int start,int end,  vector<int> ans){
        //base case
        if(start>end){
            return NULL;
        }
        int mid=(start+end)/2;
        TreeNode<int> *root=new TreeNode<int>(ans[mid]);
        root->left= inordertobst(start,mid-1, ans);
        root->right= inordertobst(mid+1,end, ans);
        return root;
        
    }
TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
     vector<int> bst1,bst2;
	// 1. store inorder
     inordertrav(root1,bst1);
	 inordertrav(root2,bst2);
	
	// 2. merge bst1 and bst2
	vector<int> merge=mergearray(bst1,bst2);
	
	// 3. create bst from inorder
	int start=0,end=merge.size()-1;
	return inordertobst(start,end,merge);
}
