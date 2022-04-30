class Solution {
public:
    TreeNode* lltobst(ListNode* &head,int left,int right){
        if(left>right || head==NULL) return NULL;
        
        int mid=(left+right+1)/2;
        
        TreeNode* root=new TreeNode();
        root->left=lltobst(head,left,mid-1);
        
        root->val=head->val;
        head=head->next;
        root->right=lltobst(head,mid+1,right);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        
        return lltobst(head,0,n-1);
    }
};
