class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n = nums.size();

        int minEl = nums[0];

        int result = -1;

        for(int j = 0; j < n; j++){

            if(nums[j] > minEl){
                result = max(result, nums[j] - minEl);
            }
            else{
                minEl = nums[j];
            }
        }
        return result;
    }
};