class Solution {
public:
    /*  int position(vector<int>& inorder, int element, int n){
      for every element it will take O(n) time to search
       for(int i=0;i<n;i++){
            if(inorder[i]==element) return i;
        }
        return -1;
   
    } */
    void createmap(vector<int>& inorder,map<int,int>& nodetoindex,int n){
    //  for every element it will take O(1) time to search ans one time O(n) to create map
       for(int i=0;i<n;i++){
            nodetoindex[inorder[i]] = i;   // map elements with index
        }

    }
     TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &index,int instart, int inend,int n,map<int,int>& nodetoindex){
         //base case
         if(index>=n || instart>inend){
             return NULL;
         }
         int element=preorder[index++];
         //create node in tree
         TreeNode* root=new TreeNode(element);
         // find positionj of root element in inorder traversal
         //int pos=position(inorder, element,n);
         int pos=nodetoindex[element];
         
         //recursive call
         root->left= solve(preorder, inorder, index, instart, pos-1,n,nodetoindex);
         root->right=solve(preorder, inorder, index, pos+1,inend,n, nodetoindex);
         
         return root;
     }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindex =0; 
        int n= inorder.size();
        map<int, int> nodetoindex;
        createmap(inorder,nodetoindex,n);
        TreeNode* ans=solve(preorder,inorder,preindex,0, n-1,n,nodetoindex); //0 & n-1 indicating starting and ending index of inorder 
        return ans;
    }
};
