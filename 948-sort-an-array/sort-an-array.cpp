class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        unordered_map<int, int> mp;

        for(int &num : nums){
            mp[num]++;
        }

        int minEl = *min_element(nums.begin(), nums.end());
        int maxEl = *max_element(nums.begin(), nums.end());

        int idx = 0;

        for(int i = minEl; i <= maxEl; i++){

            while(mp[i] > 0){
                nums[idx] = i;
                idx++;
                mp[i]--;
            }
        }
        return nums;
    }
};