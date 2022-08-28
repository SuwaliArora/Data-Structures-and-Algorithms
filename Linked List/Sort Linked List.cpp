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
    ListNode* findmid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        ListNode* ans=new ListNode(0);
        ListNode* temp=ans;
        
        while(l1!=NULL && l2!=NULL){
            if(l1->val < l2->val){
                temp->next=l1;
                temp=temp->next;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                temp=temp->next;
                l2=l2->next;
            }
        }
        if(l1!=NULL){
            temp->next=l1;
        }
        if(l2!=NULL){
            temp->next=l2;
        }
        
        return ans->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        // call function to find mid of the linked list
        ListNode* mid=findmid(head);
        
        // divide the list into 2 halves
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        
        // sort the half linked lists
        left=sortList(left);
        right=sortList(right);
        
        // merge the both linked list
        ListNode* result= merge(left,right);
        return result;
    }
};
