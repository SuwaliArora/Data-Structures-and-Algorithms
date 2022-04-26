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
    int sum;
};
// class type function
    info solve(TreeNode* root, int &ans){
        //base case
        if(root==NULL){
            return {INT_MIN,INT_MAX,true,0};
        }
        
        //recursive call for left
        info left=solve(root->left,ans);
        // recursive call for right
        info right=solve(root->right,ans);
        
        info currnode;
        
        currnode.sum = left.sum + right.sum + root->val;
        currnode.maxi=max(root->val,right.maxi);
        currnode.mini=min(root->val,left.mini);
        
        // check 3 conditions for current node
        if(left.isbst && right.isbst && (root->val > left.maxi && root->val < right.mini)){
            currnode.isbst=true;
        }
        else {
            currnode.isbst=false;
        }
        // update ans
        if(currnode.isbst){
            ans=max(ans,currnode.sum);
        }
        return currnode;
    }

class Solution {
public:
    int maxSumBST(TreeNode* root) {
        int maxsum=0;
    	info temp = solve(root,maxsum);
    	return maxsum; 
    }
};



// Time Complexity= O(n) as we have traverse each node only once
