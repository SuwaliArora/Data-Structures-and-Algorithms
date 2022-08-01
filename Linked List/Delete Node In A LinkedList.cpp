/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// create class for linked list 
class node{
    public:
        int num;
        node* next;
        // parameterized constructor
        node(int num){
            this->num=num;
            this->next=NULL;
        }
};

// function to add node in the end of list--------> time complexity= O(n)
void insert(node* &head, int val){
    node* newnode=new node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    // insert further node
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

// reference to node that we have to delete--------> time complexity= O(n)
node* getnode(node* head,int val)
{
    while(head->num!=val){
        head=head->next;
    }
    return head;
}

// delete node function--------> time complexity= O(1)
void deletenode(node* t){
    t->num=t->next->num;
    t->next=t->next->next;
    return;
}

// function for printing linked list--------> time complexity= O(n)
void print(node* head){
    while(head->next!=NULL){
        cout<<head->num<<"->";
        head=head->next;
    }
    cout<<head->num<<"\n";
}

int main()
{
    node* head=NULL;
    insert(head,20);
    insert(head,10);
    insert(head,30);
    insert(head,60);
    insert(head,200);
    
    cout<<"print linked list:";
    print(head);
    node* temp=getnode(head,30);
    deletenode(temp);
    cout<<"print linked list after deletion:";
    print(head);
    return 0;
}
