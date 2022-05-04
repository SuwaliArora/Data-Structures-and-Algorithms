class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       //check if list is empty or having only one node
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
         // to check if last node is pointing to null and second last node is pointing to null
        while(fast!=NULL || fast->next!=NULL){
            if(fast->next==NULL){
                return slow;
            }
            if(fast->next->next==NULL){
                return slow->next;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return 0;
    }
};
