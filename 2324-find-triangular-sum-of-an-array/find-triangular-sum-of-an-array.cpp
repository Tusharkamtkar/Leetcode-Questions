class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n = nums.size();

        for(int size = n-1; size >= 1; size--){ // size will decrease always

            for(int i = 0; i < size; i++){ // O(n^2) time
                nums[i] = (nums[i] + nums[i+1]) % 10; // modifying same nums O(1) space
            }
        }
        return nums[0];
    }
};