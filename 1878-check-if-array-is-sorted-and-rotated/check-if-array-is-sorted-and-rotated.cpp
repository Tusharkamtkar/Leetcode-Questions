class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int dec = 0;
        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i+1]) dec++;
        }
        if(nums[0] < nums[n-1]) dec++;
        return dec<=1;
    }
};