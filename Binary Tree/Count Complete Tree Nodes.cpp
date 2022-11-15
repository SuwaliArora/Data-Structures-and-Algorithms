class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int count=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            count+=len;
            for(int i=0;i<len;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }  
        }
        return count;
    }
};
