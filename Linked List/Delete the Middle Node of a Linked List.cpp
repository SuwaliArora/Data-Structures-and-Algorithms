class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        if(!head) return head;
      
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
       
        ListNode* dummy=head;
        
        // edge cases
         if(count==1) return NULL;
         if(count==2) {
             dummy->next=NULL;
             return dummy;
         }
        
        for(int i=0;i<count/2-1;i++){
            dummy=dummy->next;
        }
        ListNode* a=dummy->next;
        dummy->next=a->next;
        
        return head;
    }
};
