class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        int n = nums.size();

        while(k--){

                int mini = min_element(nums.begin(), nums.end()) - nums.begin();

                nums[mini] *= multiplier;

        }
        return nums;
    }
};