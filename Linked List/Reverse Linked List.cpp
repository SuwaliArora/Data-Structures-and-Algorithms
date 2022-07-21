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
    ListNode* reverseList(ListNode* head) {
        return reverse(head,NULL);
    }
    ListNode* reverse(ListNode* curr,ListNode* prev){
        if(curr==NULL){
            return prev;
        }
        ListNode* next=curr->next;
        curr->next=prev;
        return reverse(next,curr);
    }
};
