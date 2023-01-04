class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=0;
        int n=tasks.size();
        unordered_map<int,int> mp;
        for(int it:tasks){
            mp[it]++;
        }
        for(auto it:mp){
            while(it.second!=0){
                if(it.second%3==0){
                    count++;
                    it.second= it.second-3;
                }
                else if(it.second==2 || it.second%2==0) {
                    count++;
                    it.second= it.second-2;
                }
                else if(it.second>=3) {
                    count++;
                    it.second= it.second-3;
                }
                
                else{
                    return -1;
                }
            }
        }
        return count;
    }
};
