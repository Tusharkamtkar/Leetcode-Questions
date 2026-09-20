class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        int zeorsCount = 0;
        int proWithouZeors = 1;

        vector<int> ans(n);

        for (int& num : nums) {
            if (num == 0) {
                zeorsCount++;
            }
            else{
                proWithouZeors *= num;
            }
        }

        for (int i = 0; i < n; i++) {

            int num = nums[i];

            if (num != 0) {
                if (zeorsCount > 0) {
                    ans[i] = 0;
                } else {
                    ans[i] = proWithouZeors / nums[i];
                }
            } else {
                if (zeorsCount > 1) {
                    ans[i] = 0;
                } else {
                    ans[i] = proWithouZeors;
                }
            }
        }
        return ans;
    }
};