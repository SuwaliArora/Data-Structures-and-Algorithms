class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            Node* dummy=new Node(0);
            while(size--){
                Node* node=q.front();
                q.pop();
                dummy->next=node;
                dummy=dummy->next;
                
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
        }
        return root;
    }
};
