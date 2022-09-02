/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
       vector<double> ans;
       if(!root) return ans;
       double sum=0;
        
       queue<TreeNode*> q;
       q.push(root);
        
       while(!q.empty()){
           sum=0;
           int size=q.size();
           for(int i=0;i<size;i++){
               
               TreeNode* frontnode=q.front();
               sum += frontnode->val;
               q.pop();
               
               if(frontnode->left) q.push(frontnode->left);
               if(frontnode->right) q.push(frontnode->right);
           }
           ans.push_back(sum/size);
       }
       return ans;  
    }
};
