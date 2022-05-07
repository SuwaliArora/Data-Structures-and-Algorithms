class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        
        // if left child of root node exist
        if(root->left){
            if(root->right){
                root->left->next = root->right;
            }
        }
        if(root->right){
            if(root->next){
                root->right->next = root->next->left;
            }
        }
        // recursive call for left child
        connect(root->left);
        
        // recursive call for right child
        connect(root->right);
        return root;
    }
};
