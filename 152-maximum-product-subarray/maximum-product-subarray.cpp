class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int maximum = INT_MIN;
        int product = 1;

        for(int i = 0; i<n; i++){
            product = product * nums[i];
            maximum = max(product, maximum);

            if(product == 0)
                product = 1;
        }
            product = 1;
        for(int i = n-1; i >= 0; i--){
            product = product * nums[i];
            maximum = max(product, maximum);

            if(product == 0)
            product = 1;
        }
        return maximum;
    }
};