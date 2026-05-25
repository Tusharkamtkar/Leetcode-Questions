class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> sum;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int num = nums[i];
            int needMore = target - num;
            if(sum.find(needMore) != sum.end()){
                return {sum[needMore], i};
            }
            sum[num] = i;
        }
        return{-1, -1};
    }
};