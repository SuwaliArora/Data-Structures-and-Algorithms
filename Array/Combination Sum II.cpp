class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> output;
        int index=0;
        solve(index, result, candidates, target, output);
        return result;
    }
    void solve(int index, vector<vector<int>> &result, vector<int>& candidates, int target,vector<int> &output){
        //base case
        if(target==0){
            result.push_back(output); 
            return;
        }
          
        for(int i=index; i<candidates.size();i++)
        {
            if(i>index && candidates[i]==candidates[i-1]){
            continue;  // not to pick the candidates[i] element as it is previously selected and avoids duplicacy
            }
            if(candidates[i]>target){
                break;
            }   
            output.push_back(candidates[i]);
            solve(i+1,result,candidates,target-candidates[i], output);
            output.pop_back(); //backtracking
        }        
    }
};

//  TIME COMPLEXITY= (2^n * k) where 2^n is the time taken by recursion, k is the time taken to insert output array(avg length of array is k) in the result array. 
// SPACE COMPLEXITY-(k*x) where k is the avg length of combinations and x is number of combinations
