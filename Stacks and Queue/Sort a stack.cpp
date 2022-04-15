/* The below method sorts the stack s 
you are required to complete the below method */
void sortedinsert(stack<int>& stack, int num){
    // base case
    if(stack.empty() || (!stack.empty() && stack.top()<num)){
        stack.push(num);
        return;
    }
    // store top elements in temparory variable one by one till stack is empty
    int n= stack.top();
    stack.pop();
    //recursive call
    sortedinsert(stack,num);
    stack.push(n);
}

void SortedStack :: sort()
{
   //base case
   if(s.empty()){
       return;
   }
   int num= s.top();
    s.pop();
    //recursive call
    sort();
    
    sortedinsert(s, num);
}
