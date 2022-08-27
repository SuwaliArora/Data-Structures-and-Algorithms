class Solution{
public:

	void rearrange(int arr[], int n) {
	    int pos[n],neg[n];
	    int cnt=0,cnt2=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            pos[cnt]=arr[i];
	            cnt++;
	        }
	        else{
	            neg[cnt2]=arr[i];
	            cnt2++;
	        }
	    }
	    int i=0,posi=0,nega=0;
	    while(posi<cnt && nega<cnt2){
	        arr[i]=pos[posi];
	        i++;
	        posi++;
	        
	        arr[i]=neg[nega];
	        i++;
	        nega++;
	    }
	    while(posi<cnt){
	        arr[i]=pos[posi];
	        i++;
	        posi++; 
	    }
	    while(nega<cnt2){
	        arr[i]=neg[nega];
	        i++;
	        nega++; 
	    }
	}
};
