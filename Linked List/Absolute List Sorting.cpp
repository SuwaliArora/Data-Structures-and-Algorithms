class Solution{
    
public:
    Node* sortList(Node* head)
    {
        if(head==NULL || head->next==NULL) return head;
        Node* curr=head;
        Node* temp;
        while(curr->next){
           if(curr->next->data<0){
               temp=curr->next;
               curr->next=curr->next->next;
               temp->next=head;
               head=temp;
           } 
           else{
               curr=curr->next;
               
           }
        }
        return head;
    }
};
