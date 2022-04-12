class Solution {
public:
     TreeNode* balance(int min,int max,vector<int>& preorder, int &i){
        //base case
        if(i>=preorder.size() || preorder[i] < min || preorder[i] > max){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(preorder[i]);
        i++;
        root->left= balance(min,root->val, preorder,i);
        root->right= balance(root->val,max, preorder,i);
        return root;

    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return balance(INT_MIN,INT_MAX,preorder,i);
    }
};
