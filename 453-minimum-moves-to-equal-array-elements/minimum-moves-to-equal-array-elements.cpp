class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int n = nums.size();

        long long sum = accumulate(nums.begin(), nums.end(),0LL);

        int mini = *min_element(nums.begin(), nums.end());

        return sum - (1LL * n * mini);
    }
};