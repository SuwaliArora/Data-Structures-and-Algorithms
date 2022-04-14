//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
       // to check if atleast an empty space present
       if(top2-top1 > 1){
           top1++;
           arr[top1]=x;
       }
       
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    // to check if atleast an empty space present
       if(top2-top1 > 1){
           top2--;
           arr[top2]=x;
       }
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
      if(top1>=0){
          int ans=arr[top1];
          top1--;
          return ans;
      }
      else{
          return -1;
      }
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
       if(top2<size){
          int ans=arr[top2];
          top2++;
          return ans;
      }
      else{
          return -1;
      }
}

