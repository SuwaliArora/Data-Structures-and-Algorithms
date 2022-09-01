class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int, int>> ans;
       
        Node* temp=head, *node=head;
        while(node->next!=NULL){
            node=node->next;
        }
        while(temp!=node && temp->prev!=node){
            if(temp->data + node->data == target){
                
                ans.push_back({temp->data, node->data});
                node=node->prev;
                temp=temp->next;
            }
            else if(temp->data + node->data > target)
            {
                node=node->prev;
            }
            else{
                temp=temp->next;
            }
        }
        return ans;
    }
};
