class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        
        int n = nums.size();

        int K = -1; // all bits are SET (11111111);

        for(int i = 0; i < n; i++){

            if(nums[i] != i){
                K = (K & nums[i]);
            }
        }

        if(K == -1){
            return 0;
        }
        else{
            return K;
        }
    }
};