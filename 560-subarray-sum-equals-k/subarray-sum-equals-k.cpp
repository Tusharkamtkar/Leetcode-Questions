class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        // Brute force!
        
        // int n = nums.size();
        // int count = 0;
        // for(int i =0; i<n; i++){
        //     long long  sum = 0;
        //     for(int j = i; j<n; j++){
        //         sum = sum + nums[j];
        //         if(sum == k) count++;
        //     }
        // }
        // return count;

        unordered_map<int,int> mpp;
        
        mpp[0] = 1;

        int n = nums.size();
        int preSum = 0, count = 0;
        
        for(int i = 0; i<n; i++){
            preSum += nums[i];
            int remove  = preSum - k;

            count += mpp[remove];
            mpp[preSum] += 1;
        }
        return count;
    }
};