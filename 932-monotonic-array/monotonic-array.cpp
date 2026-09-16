class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int n = nums.size();

        bool increasing = false;
        bool decreasing = false;

        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i-1]){
                increasing = true;
            }
            else if(nums[i] < nums[i-1]){
                decreasing = true;
            }
        }
        if(decreasing == true && increasing == true)
        return false;

        return true;
    }
};