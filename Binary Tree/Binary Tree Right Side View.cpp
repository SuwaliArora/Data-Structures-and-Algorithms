class Solution {
public:
     
void solve(TreeNode* root, vector<int> &ans, int level){
    if(root==NULL) return;
    
    // we entered in new level
    if(level==ans.size()){
        ans.push_back(root->val);
    }
    // recursive call
    solve(root->right, ans, level+1);
    solve(root->left, ans, level+1);
     
}

    vector<int> rightSideView(TreeNode* root) {
          vector<int> ans;
          solve(root, ans, 0);
          return ans;
    }
};
