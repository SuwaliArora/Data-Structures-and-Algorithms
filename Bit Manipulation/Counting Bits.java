class Solution {
    public int countones(int i){
        
        int count=0;
        while(1<=i){
            if((i&1)==1) count++;
            i=i>>1;
        }
        return count;      

    }
    public int[] countBits(int n) {
        int[] arr=new int[n+1];
        
        for(int i=0;i<=n;i++){
            arr[i]=countones(i);
        }
        return arr;
    }
}
