class Solution {
  public:
    vector<int> maximumValue(Node* root) {
        //code here
        vector<int> v;
        if(!root) return v;
        int maxi=0;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            maxi=INT_MIN;
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* frontnode=q.front();
                if(frontnode->data>maxi) maxi=frontnode->data;
                q.pop();
                
                if(frontnode->left) q.push(frontnode->left);
                if(frontnode->right) q.push(frontnode->right);
            }
            v.push_back(maxi);
        }
        return v;
    }
};
