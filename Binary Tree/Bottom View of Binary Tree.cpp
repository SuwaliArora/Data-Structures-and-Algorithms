// using level order traversal
class Solution {
  public:
    vector <int> bottomView(Node *root) {
       vector <int> ans;
       
       if(root==NULL) return ans;
       map<int,int> mp; // map because it will store in sorted order
       queue<pair<Node*,int>> q;
       
       q.push({root,0}); // nodes and horizontal distance
       
       while(!q.empty()){
           pair<Node*,int> temp=q.front();
           q.pop();
           Node* frontnode=temp.first;
           int hd=temp.second;
           mp[hd]=frontnode->data; // map horizontal distance with nodes
           
           if(frontnode->left) q.push({frontnode->left,hd-1});
           if(frontnode->right) q.push({frontnode->right,hd+1});
       }
       for(auto it: mp){
           ans.push_back(it.second);
       }
       return ans;
    }
};
