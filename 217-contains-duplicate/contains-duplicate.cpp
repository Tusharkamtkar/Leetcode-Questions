class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        // sort(nums.begin(), nums.end());//nlogn
        for(int i =0; i<n; i++){
            if(st.count(nums[i]))return true;
            st.insert(nums[i]);
        }

    return false;
    }
};