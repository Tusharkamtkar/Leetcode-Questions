class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        int n = nums.size();

        int i = 0;

        long long count = 0;

        while(i < n){
            long long len = 0;

            if(nums[i] == 0){

                while(i < n && nums[i] == 0){
                    i++;
                    len++;
                }
            }
            else{
                i++;
            }

            count += (len) * (len + 1) / 2;
        }
        return count;
    }
};