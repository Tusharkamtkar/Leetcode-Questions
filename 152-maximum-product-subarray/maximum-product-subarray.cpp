class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        // int maximum = INT_MIN;
        // int product = 1;

        // for(int i = 0; i<n; i++){
        //     product = product * nums[i];
        //     maximum = max(product, maximum);

        //     if(product == 0)
        //         product = 1;
        // }
        //     product = 1;
        // for(int i = n-1; i >= 0; i--){
        //     product = product * nums[i];
        //     maximum = max(product, maximum);

        //     if(product == 0)
        //     product = 1;
        // }
        // return maximum;

        // Another Optimal Solution!

        int prefix = 1;
        int suffix = 1;
        int ans = INT_MIN;

        for(int i = 0; i<n; i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            
            prefix = prefix * nums[i];
            suffix = suffix * nums[n-i-1];

            ans = max(ans, max(prefix, suffix));
        }
        return ans;
    }
};