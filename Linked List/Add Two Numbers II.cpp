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

/*
Step-1 reverse the 2 linked list
Step-2 add the numbers of 2 linked list
Step-3 reverse the resultant linked list
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // reverse the linked list and make last node as head
        l1=reverse(l1);    //T.C = O(n), n=size of linked list 1
        l2=reverse(l2);    //T.C = O(m), m=size of linked list 2
        
        //add two linked list
        ListNode *result=add(l1,l2);   //T.C = O(max(m,n))
        
        // reverse the resultant linked list
        result=reverse(result);   //T.C = O(m+n)
        
        return result;
    }
    ListNode* add(ListNode *l1, ListNode* l2){
        ListNode *head=NULL;
        ListNode *tail=NULL;

        int carry=0,sum=0,digit=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int val1=0;
            if(l1!=NULL){
                val1=l1->val;
            }
            int val2=0;
            if(l2!=NULL){
                val2=l2->val;
            }
            sum=carry+ val1 + val2;
            
            digit=sum%10;
            carry=sum/10;
            
            //create new node at tail in resultant linked list
            ListNode *temp=new ListNode(digit);  // initialize the value of new node
            
            //if empty list
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            
            
            if(l1!=NULL){
                l1=l1->next;
            }
            if(l2!=NULL){
                l2=l2->next;
            }
        }  
        return head;
    }
    
// function to reverse the linked list
     ListNode* reverse(ListNode*head) {
         ListNode *curr=head;
         ListNode *prev=NULL;
         ListNode *next=NULL;
         //change the link of nodes
         while(curr!=NULL){
             next=curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
         }
         return prev;
    }
};

// TIME COMPLEXITY= O(m+n)
// SPACE COMPLEXITY= O(MAX(m,n))
