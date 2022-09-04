void sortedInsert(stack<int> &s,int ele){
    // base case
    if(s.empty() || (!s.empty() && s.top()<ele)){
        s.push(ele);
        return; // return to fun sortedInsert and take the previous element to insert in the stack   
    }
    // if ele is smaller than top
    int n=s.top(); // keep n aside
    s.pop();
    
    // recursive call
    sortedInsert(s,ele);
    s.push(n); // push previous element in stack now
}
void sortStack(stack<int> &s)
{
	if(s.empty()) return;
    
    int ele=s.top();
    s.pop(); // keep elememt aside one by one
    sortStack(s); // recursive call
    sortedInsert(s,ele); // we will come back to this function call after adding element to the correct position in stack
}
