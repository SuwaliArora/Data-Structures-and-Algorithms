/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // if any linked list is empty
        if(headA==NULL || headB==NULL) return NULL;
        
        ListNode *a=headA, *b=headB;
        int count1=0,count2=0;
        while(a->next!=NULL){
            count1++;
            a=a->next;
        }
        while(b->next!=NULL){
            count2++;
            b=b->next;
        }
  
        // if linked list 1 is larger than 2
        while(count1>count2){
            count1--;
            headA=headA->next;
        }
        // if linked list 2 is larger than 1
        while(count2>count1){
            count2--;
            headB=headB->next;
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};
