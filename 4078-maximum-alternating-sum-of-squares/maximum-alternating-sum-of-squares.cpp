class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i < n; i++){
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        long long lowSum  = accumulate(nums.begin(), nums.begin() + n/2, 0LL); // LL is for converting it in long long

        long long highSum = accumulate(nums.begin() + n/2, nums.end(), 0LL);

        long long ans = highSum - lowSum;

        return ans;
    }
};