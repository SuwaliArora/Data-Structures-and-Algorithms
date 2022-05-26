class Solution {
public:
    int countnodes(TreeNode* root){
        // base condition
        if(root==NULL) return 0;
        
        // recursive call
        int ans=1+countnodes(root->left)+countnodes(root->right);
        return ans;
    }
    bool isCBT(TreeNode* root,int index,int cnt){
        // base condition
        if(root==NULL) return true;
        
        if(index>=cnt){
            return false;
        }
        else{
            bool left=isCBT(root->left, 2*index+1, cnt);
            bool right=isCBT(root->right, 2*index+2,cnt);
            return (left && right);
        }
    }
    bool isCompleteTree(TreeNode* root) {
        int n=countnodes(root);
        int index=0;
        if(isCBT(root,index,n)){
            return true;
        }
        else{
            return false;
        }
    }
};
