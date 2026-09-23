class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n = nums.size();
        long long totalSum = 0;

        for(int i = 0; i < n; i++){
            totalSum += nums[i];
        }

        long long leftSum = 0;
        long long rightSum = 0;

        int ans = INT_MAX;
        int idx;

        for(int i = 0; i < n; i++){
            leftSum += nums[i];
            rightSum = totalSum - leftSum;

            int nL = i+1;
            int nR = n-nL;

            long long leftAvg = leftSum / nL;
            long long rightAvg = 0;

            if(nR != 0){
                rightAvg = rightSum / nR;
            }

            int diff = abs(leftAvg - rightAvg);

            if(diff < ans){
                ans = diff;
                idx = i;
            }
        }
        return idx;
    }
};