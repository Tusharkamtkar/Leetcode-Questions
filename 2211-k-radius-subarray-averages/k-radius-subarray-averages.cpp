class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();

        if(k == 0){
            return nums;
        }

        vector<int> result(n, -1);

        if(n < (2*k+1)){
            return result;
        }

        vector<long long> prefixSum(n, 0);
        prefixSum[0] = nums[0];

        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
        
        for(int i = k; i <= (n - k - 1); i++){
            int leftIdx = i-k;
            int rightIdx = i+k;

            long long sum = prefixSum[rightIdx];

            if(leftIdx > 0){
                sum -= prefixSum[leftIdx-1];
            }
            result[i] = sum / (2*k+1);
        }
        return result;
    }
};