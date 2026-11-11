class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> result(n, 0);

        for(int i = 0; i < n; i++){

            int next = nums[i] % n;

            int newIdx = (i + next) % n; // it will taje care of both left nd right side (+,-)

            if(newIdx < 0){
                newIdx += n;
            }

            result[i] = nums[newIdx];
        }
        return result;
    }
};