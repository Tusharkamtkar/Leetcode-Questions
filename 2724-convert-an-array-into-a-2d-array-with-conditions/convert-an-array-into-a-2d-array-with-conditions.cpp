class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int, int> mp;

        vector<vector<int>> result;

        for(int i = 0; i < n; i++){

            int freq = mp[nums[i]];

            if(result.size() == freq){
                result.push_back({});
            }

            result[freq].push_back(nums[i]);
            mp[nums[i]]++;
        }
        return result;
    }
};