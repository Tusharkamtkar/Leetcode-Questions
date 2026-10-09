class Solution {
public:

    void permutation(vector<int> &nums, vector<int> &per, vector<vector<int>> &ans, vector<int> &freq){

        if(per.size() == nums.size()){
            ans.push_back(per);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(!freq[i]){ 
                per.push_back(nums[i]);
                freq[i] = 1;

                permutation(nums, per, ans, freq);
                freq[i] = 0;

                per.pop_back();
            }
        } 
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> per;

        vector<int> freq(nums.size(),0);

        // for(int i = 0; i < nums.size(); i++){
        //     freq[i] = 0;
        // }

        permutation(nums, per, ans, freq);

        return ans;
    }
};