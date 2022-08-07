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
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(head==NULL || head->next==NULL){
            return head;
        }
        // dummy pointer
        ListNode *node=head;
        int len=1;
        while(node->next){
            len++;
            node=node->next;
        }
        // make circular linked list
        node->next=head;
        k=k%len;
        k=len-k;
        while(k--){
            node=node->next;
        }
        //make the node as head and break connnection
        head=node->next;
        node->next=NULL;
        
        return (head);
    }
};

//time complexity=O(len)+O(len-(len%k)), len=length of linked list
// space complexity=O(1)
