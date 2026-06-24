class Solution {
private:
    int countSubarrays(vector<int> &nums, int maxSum){

        int subArr = 1;
        int currSum = 0;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            if(currSum + nums[i] <= maxSum){
                currSum += nums[i];
            }
            else{
                subArr++;
                currSum = nums[i];
            }
        }
        return subArr;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n) return -1;
       int low = *max_element(nums.begin(), nums.end());
       int high = accumulate(nums.begin(), nums.end(), 0);

       while(low <= high){
        int mid = (low + high) / 2;

        int partition = countSubarrays(nums, mid);
            if(partition > k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
       }
       return low;

    }
};