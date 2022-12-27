class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int a) {
        vector<int> v;
        int count=0;
        int n=capacity.size();
        for(int i=0;i<n;i++){
            int diff=capacity[i]-rocks[i];
            v.push_back(diff);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]==0) count++;
            else if(a>=v[i]){
                a=a-v[i];
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};
