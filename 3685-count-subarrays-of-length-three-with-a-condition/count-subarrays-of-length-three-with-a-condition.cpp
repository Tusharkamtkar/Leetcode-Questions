class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();

        int result = 0;

        for(int i = 0; i < n-2; i++){

            int first = nums[i];
            int middle = nums[i+1];
            int third = nums[i+2];

            if((first + third) * 2 == middle){
                result++;
            }
        }
        return result;
    }
};