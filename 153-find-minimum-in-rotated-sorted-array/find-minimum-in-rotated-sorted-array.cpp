class Solution {
public:
    int findMin(vector<int>& nums) {
        
        // int n = nums.size();
        // int l = 0;
        // int r = n-1;
        // int mid;

        // while(l < r){
        //     mid = (l + r)/2;

        //     if(nums[mid] < nums[r]){
        //         r = mid;
        //     }
        //     else{
        //         l = mid + 1;
        //     }
        // }
        // return nums[l];

        int n = nums.size();
        int ans = INT_MAX;

        int low = 0, high = n-1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[low] <= nums[high]){
                ans = min(ans, nums[low]);
                break;
            }
            if(nums[low] <= nums[mid]){
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else{
                high = mid - 1;
                ans = min(ans, nums[mid]);
            }
        }
        return ans;
    }
};