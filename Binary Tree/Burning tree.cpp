class Solution {
  public:
  /* algo
   1. create node to parent mapping
   2. find target node
   3. burn the tree in minimum time
  */
  Node* createmap( map<Node*,Node*>& mp, Node* root, int target){
      Node* res=NULL;
      
      // for level order traversal
      queue<Node*> q;
      q.push(root);
      mp[root]=NULL;
      
      while(!q.empty()){
          Node* front=q.front();
          q.pop();
          
          if(front->data==target){
              res=front;
          }
          
          if(front->left){
              mp[front->left] =front;
              q.push(front->left);
          }
          if(front->right){
              mp[front->right]= front;
              q.push(front->right);
          }
      }
      return res;
  }
  int burntree(Node* root, map<Node*, Node*> &mp){
      map<Node*,bool> visited; // to check if node is already visted or not
      queue<Node*> q;
      
      q.push(root);
      visited[root]=true;
      
     int ans=0;
     while(!q.empty()){
         bool flag=0; // to check if any new element is added in queue or not
         int size=q.size();
         for(int i=0;i<size;i++){
             // process neighbouring nodes
             Node* front=q.front();
             q.pop();
             
             if(front->left && !visited[front->left]){
                 flag=1;
                 q.push(front->left);
                 visited[front->left]=1;
             }
              if(front->right && !visited[front->right]){
                  flag=1;
                 q.push(front->right);
                 visited[front->right]=1;
             }
             // check for parent node
             if(mp[front] && !visited[mp[front]]){
                 flag=1;
                 q.push(mp[front]);
                 visited[mp[front]]=1;
             }
         }
         if(flag==1){
             ans++;
         }
     }
         return ans;
     
  }
    int minTime(Node* root, int target) 
    {
       
        map<Node*,Node*> mp;
        Node* targetnode=createmap(mp,root,target);
        
        int ans=burntree(targetnode,mp);
        return ans;
    }
};
