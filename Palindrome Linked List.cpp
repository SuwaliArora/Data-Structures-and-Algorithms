#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *reverselist(LinkedListNode<int> *head){
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *next=NULL;
    while(head!=NULL){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
   if(head==NULL || head->next==NULL) return true;
    
    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head;
     while(fast->next && fast->next->next){
         fast=fast->next->next;
         slow=slow->next;
     }
    // call function to reverse linked list from middle to end
    slow->next=reverselist(slow->next);
    slow=slow->next;
    // check head to middle and middle+1 to end
    while(slow!=NULL){
        if(head->data!=slow->data) {
            return false;
        }
        head=head->next;
        slow=slow->next;
    }
    return true;
}
