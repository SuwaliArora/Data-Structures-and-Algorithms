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

// iterative solution - LNR
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans; // to store ans
        if(root==NULL) return ans;
        stack<TreeNode*> s; // to keep track of nodes
        TreeNode* curr=root;
        
        // infinite loop
        while(true) {
            if(curr!=NULL){
                s.push(curr);
                curr=curr->left;   
            }
            else{
                // if all nodes are traversed
                if(s.empty()) break;
                
                curr=s.top();
                ans.push_back(curr->val);  
                s.pop();
                curr=curr->right; 
            }
        }
        return ans;
    }
};
