class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL) return ans;
        
        map<int, int> mp; // pehla int horizontal distance ko dikha rha h and dusra value of nodes ko
        queue<pair<Node*, int>> q;
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int> temp=q.front();
            q.pop();
            
            Node* frontnode=temp.first;
            int hd=temp.second;
            
            // one to one mapping, ek key ke liye ek value hi hogi
            if(mp.find(hd)==mp.end()){
                mp[hd]= frontnode->data;
            }
            if(frontnode->left) q.push(make_pair(frontnode->left, hd-1));
            if(frontnode->right) q.push(make_pair(frontnode->right, hd+1));
        }
      for(auto i:mp)
            ans.push_back(i.second);
       
        
        return ans;
    }

};
