struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    bool static comp(Item a,Item b){
        double r1=(double)a.value/(double)a.weight;
        double r2=(double)b.value/(double)b.weight;
        return r1>r2;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // sorting based on our comparator
        sort(arr,arr+n,comp);
        int currweight=0;
        double resvalue=0.0;
        
        for(int i=0;i<n;i++){
            if(arr[i].weight + currweight<=W){
                currweight+=arr[i].weight;
                resvalue+=arr[i].value;
            }
            else{
                int remain=W-currweight;
                resvalue+=(arr[i].value/ (double)arr[i].weight)* (double)remain;
                break;
                
            }
        }
        return resvalue;
    }
        
};
