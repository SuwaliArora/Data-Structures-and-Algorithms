class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode* temp=head;
        if(head->next==NULL || head==NULL) return head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        ListNode* dummy=temp->next;
        dummy->next=head;
        temp->next=NULL;
        return dummy;
    }
};
