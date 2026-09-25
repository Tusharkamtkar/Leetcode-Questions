class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        
        int n = nums.size();

        unordered_set<int> st(nums.begin(), nums.end());

        int uniqueEl = st.size(); // no of unique el. in nums

        unordered_map<int, int> mpp;

        int i = 0;
        int j = 0;
        int result = 0;

        while(j < n){
            mpp[nums[j]]++;

            while(uniqueEl == mpp.size()){

                result += (n-j);

                mpp[nums[i]]--;
                if(mpp[nums[i]] == 0){
                    mpp.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        return result;
    }
};