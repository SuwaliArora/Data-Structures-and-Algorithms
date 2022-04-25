/*
conditions for a node to be valid bst
  1. if left of current is a valid bst 
  2. if right of current is a valid bst 
  3. if data of cuurent node is greater than maximum 
  of left subtree data and less than minimum of right subtree data*/

class info{
    public:
    int maxi;
    int mini;
    bool isbst;
    int size;
};
    
    // class type function
    info solve(Node* root, int &ans){
        //base case
        if(root==NULL){
            return {INT_MIN,INT_MAX,true,0};
        }
        
        //recursive call for left
        info left=solve(root->left,ans);
        // recursive call for right
        info right=solve(root->right,ans);
        
        info currnode;
        
        currnode.size=left.size + right.size + 1;
        currnode.maxi=max(root->data,right.maxi);
        currnode.mini=min(root->data,left.mini);
        
        // check 3 conditions for current node
        if(left.isbst && right.isbst && (root->data > left.maxi && root->data < right.mini)){
            currnode.isbst=true;
        }
        else {
            currnode.isbst=false;
        }
        // update ans
        if(currnode.isbst){
            ans=max(ans,currnode.size);
        }
        return currnode;
    }


class Solution{
    public:
     
    int largestBst(Node *root)
    {
    	//Your code here
    	int maxsize=0;
    	info temp = solve(root,maxsize);
    	return maxsize;
    }
};
