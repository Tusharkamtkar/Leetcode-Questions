class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();

        int longest = 1;

        sort(nums.begin(), nums.end());

        int i = 0;
        int j = 0;

        while(j < n){
            int maxEl = nums[j];
            int minEl = nums[i];

            if(i < j && maxEl > (long long)k * minEl){
                i++;
                minEl = nums[i]; 
            }

            longest = max(longest, j - i + 1);
            j++;
        }
        return n - longest;
    }
};