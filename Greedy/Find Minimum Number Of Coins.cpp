int findMinimumCoins(int amount) 
{
    int arr[9]={1,2,5,10,20,50,100,500,1000};
    int count=0;
    for(int i=8;i>=0;i--){
        while(amount>=arr[i]){
            amount-=arr[i];
            count++;
        }
    }
    return count;
}
