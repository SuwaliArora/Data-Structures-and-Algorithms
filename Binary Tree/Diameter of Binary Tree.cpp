class Solution {
public:
   
    pair<int,int> diameter(TreeNode* root){
        //base condition 
        if(root==NULL) {
            pair<int,int> p=make_pair(0,0);
            return p;
        }
        //recursive call for left subtree to find diameter and height
        pair<int,int> left=diameter(root->left) ;
        //recursive call for right subtree to find diameter and height
        pair<int,int> right=diameter(root->right);
        
        // fisrt denotes diameter and second denotes height of subtree
        int op1=left.first;
        int op2=right.first;
        int op3=left.second + right.second;
        
        pair<int,int> ans;
        ans.first=max(op1, max(op2, op3)) ;
        ans.second=max(left.second,right.second)+1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        return diameter(root).first;
   }
};

//time complexity= O(n) 
//space complexity=O(height)
