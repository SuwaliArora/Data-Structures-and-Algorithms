// Function to find the minimum element in the given BST.
int minValue(Node* root) {
    // Code here
    Node* temp=root;
    if(root==NULL){
        return -1;
    }
    while(temp->left !=NULL){
        temp=temp->left;
    }
    return temp->data;
}
