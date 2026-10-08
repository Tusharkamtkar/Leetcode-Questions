class Solution {
public:
    void combination(int idx, int target, vector<int> &candidates, vector<int> &combi, vector<vector<int>> &ans){

        if(idx == candidates.size()){
            if(target == 0){
                ans.push_back(combi);
            }
            return;
        }

        if(candidates[idx] <= target){ // picking el
            combi.push_back(candidates[idx]);

            combination(idx, target - candidates[idx], candidates, combi, ans);

            combi.pop_back();
        }

        combination(idx+1, target, candidates, combi, ans); // not picking el
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> combi;

        combination(0, target, candidates, combi, ans);

        return ans;
    }
};