class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> sorted(n);

        for(int rotation = 0; rotation < n; rotation++){

            int idx = 0;

            for(int i = rotation; i < n; i++){
                sorted[idx] = nums[i];
                idx++;
            }

            for(int i = 0; i < rotation; i++){
                sorted[idx] = nums[i];
                idx++;
            }

        bool isTrue = true;
        for(int i = 0; i < n-1; i++){

            if(sorted[i] > sorted[i+1]){
                isTrue = false;
                break;
            }
        }
        if(isTrue == true){
            return true;
        }
        }
        return false;
    }
};