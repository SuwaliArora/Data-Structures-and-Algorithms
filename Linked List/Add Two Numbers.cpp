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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* d1=new ListNode();
        ListNode* temp=d1;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            
            ListNode* node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        
       return d1->next; 
    }
};

//Time complexity= O(max(m,n)), m=size of l1, n=size of l2
//space complxity= O(n) for new linked list
