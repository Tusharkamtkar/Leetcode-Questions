class Solution {
public:

    void subSet(int idx, vector<int> &current, vector<int> &nums, vector<vector<int>> &ans){

        int n = nums.size();

        if(idx == n){

            ans.push_back(current);
            return;
        }

        current.push_back(nums[idx]);
        subSet(idx+1, current, nums, ans); // first cal taking el

        current.pop_back(); // removing el after taking

        subSet(idx+1, current, nums, ans); // sec call not take el
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;

        subSet(0, current, nums, ans);

        return ans;
    }
};