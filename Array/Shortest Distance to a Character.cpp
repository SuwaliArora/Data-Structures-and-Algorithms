class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.length();
        vector<int> answer,position;
        int prev=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]==c)
            position.push_back(i);
        }

        for(int i=0;i<n;i++){
            int shortest_dis=INT_MAX;
            for(int j=0;j<position.size();j++){
               shortest_dis=min(shortest_dis,abs(i-position[j])); 
            }
            answer.push_back(shortest_dis);
        }
        return answer;
    }
};
