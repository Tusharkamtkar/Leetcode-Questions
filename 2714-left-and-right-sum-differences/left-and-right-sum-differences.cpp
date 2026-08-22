class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = nums.size();

        int sum = accumulate(nums.begin(), nums.end(), 0);

        vector<int> result(n);

        int currSum = 0;

        for(int i = 0; i < n; i++){

            int leftSum = currSum;

            currSum += nums[i];

            int rightSum = sum - currSum;

            result[i] = abs(rightSum - leftSum);
        }
        return result;
    }
};