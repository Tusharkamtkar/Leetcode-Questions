class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i < n; i++){

            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        long long lowSum = 0;

        for(int i = 0; i < n/2; i++){

            lowSum += nums[i];
        }

        long long highSum = 0;

        for(int i = n/2; i < n; i++){

            highSum += nums[i];
        }

        long long ans = highSum - lowSum;

        return ans;
    }
};