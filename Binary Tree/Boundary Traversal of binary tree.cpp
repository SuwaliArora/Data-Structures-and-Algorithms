class Solution {
public:
    void traverseleft(Node* root, vector<int>& ans){
        //base case
        if(root==NULL || (root->left==NULL && root->right==NULL)) return;
        
        ans.push_back(root->data);
        if(root->left)
            traverseleft(root->left,ans);
        else
            traverseleft(root->right,ans);   // agr left of left subtree doesn't exist
        
    }
    
    void traverseleaf(Node* root, vector<int>& ans){
        if(root==NULL) return;
        
        if(root->left==NULL && root->right==NULL){
             ans.push_back(root->data);
             return;
        }
        traverseleaf(root->left,ans); //lead nodes of left subtree
        traverseleaf(root->right,ans);  // leaf nodes of right subtree
    }
    
    void traverseright(Node* root, vector<int>& ans){
        //base case
        if(root==NULL || (root->left==NULL && root->right==NULL)) return;
        
        
        if(root->right)
          traverseright(root->right,ans);
        else
          traverseright(root->left,ans);  // agr right of right subtree doesn't exist
            
        ans.push_back(root->data);
        
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL) return ans;
        
        ans.push_back(root->data);
        // taverse left node
        traverseleft(root->left, ans);
        
        // traverse leaf node
        traverseleaf(root->left,ans);
        traverseleaf(root->right,ans);
        
        //traverse right node
        traverseright(root->right, ans);
        
    }
};
