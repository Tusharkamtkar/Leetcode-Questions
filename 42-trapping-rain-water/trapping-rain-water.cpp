class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        vector<int>prefixSum(n,0);
        vector<int>suffixSum(n,0);
        int total = 0;
        prefixSum[0] = height[0];

        for(int i = 1; i < n; i++){
            prefixSum[i] = max(prefixSum[i-1], height[i]);
        }

        suffixSum[n-1] = height[n-1];

        for(int i = n-2; i >= 0; i--){
            suffixSum[i] = max(suffixSum[i+1], height[i]);
        }

        for(int i = 0; i < n-1; i++){

            int leftMax  = prefixSum[i];
            int rightMax = suffixSum[i];

            if(height[i] < prefixSum[i] && height[i] < suffixSum[i]){

                total += min(leftMax, rightMax) - height[i];
            }
        }
        return total;
    }
};