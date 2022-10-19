class Solution {
public:
    struct comp{
         bool operator()(pair<string,int> &a, pair<string,int>& b){
        // if frequency is same but lexicographically greater element on top
        if(a.second==b.second) return a.first<b.first;
        
        else 
            return a.second>b.second; // jiski freq jyada hai
    }
    };
   
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        unordered_map<string,int> mp;
        for(auto it:words) mp[it]++;
        
        priority_queue<pair<string,int>, vector<pair<string,int>>, comp> pq;
            
        for(auto x:mp){
            if(pq.size()<k){
                pq.push({x.first,x.second});
            }
            else{
                if(pq.top().second < x.second || (pq.top().second == x.second && pq.top().first > x.first)){
                    pq.pop();
                    pq.push({x.first,x.second});
                }
            }
        }
        while(!pq.empty()){
            ans.push_back({pq.top().first});
            pq.pop();
        }           
       reverse(ans.begin(),ans.end());
                   return ans;
    }
};
