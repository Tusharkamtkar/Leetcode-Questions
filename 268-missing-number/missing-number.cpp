class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        int i = 0;
        int j = 1;

        int sumOfNums = 0;

        for(int i = 0; i < n; i++){
            sumOfNums += nums[i]; 
        }

        int sumOfNdigits = (n * (n+1)) / 2;

        int ans = sumOfNdigits - sumOfNums;

        return ans;
    }
};