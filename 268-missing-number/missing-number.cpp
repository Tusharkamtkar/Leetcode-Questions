class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> missing(n+1, -1);

        for(int i = 0; i < n; i++){
            missing[nums[i]] = nums[i]; // for insering el in missing
        }

        for(int i = 0; i < missing.size(); i++){
            if(missing[i] == -1){
                return i;
            }
        }
        return 0;
    }
};