class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += nums[i];
        }

        int currSum = 0;

        for(int i = 0; i < n; i++){
            int leftSum = currSum;
            int rightSum = sum - currSum - nums[i];

            if(leftSum == rightSum){
                return i;
            }
            currSum += nums[i];
        }
        return -1;
    }
};