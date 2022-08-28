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
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return NULL;
        
        ListNode* temp=head;
        vector<int> a;
        while(temp!=NULL){
           a.push_back(temp->val);
           temp=temp->next;     
        }
        // T.C=O(number of nodes)
        
        sort(a.begin(),a.end()); // T.C=O(nlogn)
        
        ListNode* dummy=new ListNode(a[0]);
        ListNode* start=dummy;
        
        // T.C=O(n)
        for(int i=1;i<a.size();i++){
            ListNode* temp=new ListNode(a[i]);
            start->next=temp;
            start=start->next;
        }
        return dummy;
    }
};
