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

class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};
    
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>, compare> mh;
        
        int k=lists.size();
        
        if(k==0) return NULL;
        
        // step-1 create heap
        for(int i=0;i<k;i++){
            if(lists[i]!=NULL){
                mh.push(lists[i]);
            }
        }
        ListNode* head=NULL;
        ListNode* tail=NULL;
        
        while(mh.size()>0){
            ListNode* top=mh.top();
            mh.pop();
            
             if(top->next!=NULL){
                    mh.push(top->next);
             }
            
            if(head==NULL){
              // answer LL is empty  
                head=top;
                tail=top;
            }
            else{
                // insert at linked list
                tail->next=top;
                tail=top;
            }
        }
        return head;
    }
};
