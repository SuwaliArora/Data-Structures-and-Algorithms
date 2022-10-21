class Solution {
public:
    string reorganizeString(string s) {
        string res="";
        unordered_map<char,int> mp;
        int n=s.length();
        priority_queue<pair<int,char>> pq;
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        for(auto it: mp){
               pq.push({it.second,it.first});
        }
        
        while(!pq.empty()){
            pair<int,char> temp=pq.top();
            res+=temp.second;
            temp.first--;
            pq.pop();
            // alg alg letters ka combmination bana ke dekhenge
            if(!pq.empty()){
                pair<int,char> temp2=pq.top();
                res+=temp2.second;
                temp2.first--;
                pq.pop();
                
                if(temp2.first>0) pq.push({temp2.first,temp2.second});
                if(temp.first>0) pq.push({temp.first,temp.second});
            }
            else{
                if(temp.first!=0) return "";
            }
        }
        return res;
    }
};
