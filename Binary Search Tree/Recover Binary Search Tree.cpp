class Solution {
private:
    TreeNode *first, *last,*middle,*prev;
    
    void inorder(TreeNode* root){
         if(root==NULL) return;
         inorder(root->left);
        
         if(prev!=NULL && (root->val < prev->val)){
             // first violation, mark 2 nodes as first and middle
             if(first==NULL){
                 first=prev;
                 middle=root;
             }
             // second violation
             else{
                 last=root;
             }
         }
        prev=root;
        inorder(root->right);
    }

public: 
    void recoverTree(TreeNode* root) {
       first=last=middle=NULL;
       prev=new TreeNode(INT_MIN);
       inorder(root);
        
       // if two nodes are not adjacent in inorder traversal
        if(first && last) swap(first->val, last->val);
         // if two nodes are adjacent in inorder traversal
        else if(first && middle) swap(first->val, middle->val);
        
    }
};
