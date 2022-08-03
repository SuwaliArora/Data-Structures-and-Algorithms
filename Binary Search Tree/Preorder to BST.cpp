class Solution{
public:
    //Function that constructs BST from its preorder traversal.
     Node* solve(int pre[],int n,int low,int high){
        // base condition
        // high and low are pointing to the same node
        if(low==high){
            Node* temp=newNode(pre[low]);
            return temp;
        }
        if(low>high) return NULL;
        // get the root of the tree
        Node* root=newNode(pre[low]);
        int i=low+1;
        
        while(i<=high && pre[i]<pre[low]){
            i++;
        }
        // till i we get all the smaller elements than root, so they will be in left subtree
        root->left=solve(pre,n,low+1,i-1);
        root->right=solve(pre,n,i,high);
        return root;
    }
    //Function that constructs BST from its preorder traversal.
    Node* post_order(int pre[], int size)
    {
        if(size==0) return NULL;
        return solve(pre,size,0,size-1);
    }
};
