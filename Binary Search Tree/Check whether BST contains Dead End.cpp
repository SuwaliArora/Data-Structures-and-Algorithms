// function to store all nodes
void storenodes(Node* root, unordered_set<int> &allnodes,unordered_set<int> &leafnodes){
       if(root==NULL) return;
       
       allnodes.insert(root->data);
       
       //store leaf nodes
       if(root->left==NULL && root->right==NULL){
           leafnodes.insert(root->data);
           return;
       }
       
       //recursive call
       storenodes(root->left,allnodes,leafnodes);
       storenodes(root->right,allnodes,leafnodes);
}

/*You are required to complete below method */
bool isDeadEnd(Node *root)
{
    //Your code here
    if(root==NULL) return false;
    unordered_set<int> allnodes,leafnodes;
    
    allnodes.insert(0); // 0 is inserted to handle case of 1
    
    storenodes(root,allnodes,leafnodes);
    
    // traverse leaf nodes
    for(auto i=leafnodes.begin();i!=leafnodes.end();i++){
        if(allnodes.find(*i-1)!=allnodes.end() && allnodes.find(*i+1)!=allnodes.end()){
            return true;
        }
    }
    return false;
}

// time complexity= O(n)
