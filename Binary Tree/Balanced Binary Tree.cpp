class Solution {
public:
   
    pair<bool, int> balance(TreeNode* root){
        if(root==NULL) {
            pair<bool, int> p=make_pair(true,0);
            return p;
        }
        //recursive call for left subtree to find if balanced or not and height
        pair<bool,int> left=balance(root->left) ;
         
        //recursive call for right subtree to find if balanced or not and height
        pair<bool,int> right=balance(root->right) ;
        
         // first denotes diameter and second denotes height of subtree
        bool leftans=left.first;
        bool rightans=right.first;
        int diff=abs(left.second - right.second);  // difference between heights of left and right subtree 
        
        pair<bool,int> ans;
         if(leftans && rightans && diff<=1)
         {
              ans.first=true ;
         }
        else {
              ans.first=false ;
         }
        ans.second=max(left.second,right.second)+1;
        return ans;
    
    }

    bool isBalanced(TreeNode* root) {
        return balance(root).first;
    }
};

//Time complexity= O(n^2) because we are calling 2 functions- isBalanced and height
