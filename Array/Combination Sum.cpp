class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> output;
        int index=0;
        solve(index, result, candidates, target, output);
        return result;
    }
    void solve(int index, vector<vector<int>> &result, vector<int>& candidates, int target,vector<int> &output){
        //base case
        if(index==candidates.size()){
            if(target==0){
               result.push_back(output); 
            }
            return;
        }
        
        //include the element
        if(candidates[index]<=target){
            output.push_back(candidates[index]);
            solve(index,result,candidates,target-candidates[index], output);
            output.pop_back();
        }
        //exclude the element
        solve(index+1,result, candidates,target,output);
        
    }
};

/* TIME COMPLEXITY= (2^t) * k where k is the time taken to put 'output' array in 'result' array 
2^t is the avg time by recursion calls
   SPACE COMPLEXITY depends on number of combinations */
