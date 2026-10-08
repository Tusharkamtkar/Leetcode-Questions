class Solution {
public:

    void findCombination(int idx, int target, vector<int> &candidates, vector<int> &combination, vector<vector<int>> &ans){

        if(target == 0){
            ans.push_back(combination);

            return;
        }

        for(int i = idx; i < candidates.size(); i++){
            if(i > idx && candidates[i] == candidates[i-1]) continue;

            if(candidates[i] > target) break;

            combination.push_back(candidates[i]);

            findCombination(i+1, target - candidates[i], candidates, combination, ans);

            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(), candidates.end()); // for sorted and unique combi. of ans

        vector<vector<int>> ans;
        vector<int> combination;

        findCombination(0, target, candidates, combination, ans);

        return ans;
    }
};