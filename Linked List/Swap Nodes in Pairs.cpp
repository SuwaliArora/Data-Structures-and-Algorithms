/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* dummy=new ListNode();
        ListNode* prev=dummy;
        ListNode* curr=head;
        
        // if 1 node is left
        while(curr && curr->next)
        {
            prev->next=curr->next;
            curr->next=prev->next->next;
            prev->next->next=curr;
            
            // shift to next pairs
            prev=curr;
            curr=curr->next;
        }      
        
        
        return dummy->next;
    }
};
