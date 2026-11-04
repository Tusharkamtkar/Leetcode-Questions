class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();

        nth_element(nums.begin(), nums.begin() + n/2, nums.end());

        int moves = 0;

        int mid = nums[n/2];

        for(int i = 0; i < n/2; i++){ // half time 
            moves += abs(nums[i] - mid);
            moves += abs(nums[n-i-1] - mid);
        }
        return moves;
    }
};