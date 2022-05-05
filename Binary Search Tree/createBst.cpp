#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
       int data;
       Node* left;
       Node* right;
        
        //constructor
       Node(int d){
           this->data=d;
           this->left=NULL;
           this->right=NULL;
       }
};

// traversing BST by level order traversal
void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
       
        q.pop();
        
        // 1 level is completed
        if(temp==NULL) { //separator
            cout<<endl;
            if(!q.empty()){   //queue still have some child nodes
                q.push(NULL);
            }
        }
        else{
             cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        
    }
}

// Insert elements in BST
Node* insertinbst(Node* &root, int d){
    //base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d > root->data){
        //insert in right part
        root->right= insertinbst(root->right,d);
    }
    else{
        //insert in left part
        root->left= insertinbst(root->left,d);
    }
    return root;
}

// enter elements for creating BST
void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        insertinbst(root,data);
        cin>> data;
    }
}

int main() {
    Node* root=NULL;
    cout<<"enter data to create BST: "<<endl;
    takeinput(root);
    
    cout<<"print the BST: "<<endl;
    levelorder(root);
    return 0;
}
