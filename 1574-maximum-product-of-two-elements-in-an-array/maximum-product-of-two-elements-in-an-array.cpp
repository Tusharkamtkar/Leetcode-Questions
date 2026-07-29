class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int currMax = nums[0];

        int result  = 0;  


        for(int i = 1; i < n; i++){
            result = max(result, (nums[i]-1)*(currMax-1));

            currMax = max(currMax, nums[i]);
        }
        return result;
    }
};