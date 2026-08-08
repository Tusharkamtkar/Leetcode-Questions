class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
        int n = nums.size();

        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> count(maxi+1,0);

        for(int num : nums){
            count[num]++;
        }

        int index = 0;

        for(int val = 0; val <= maxi; val++){
            while(count[val] > 0){
                nums[index] = val;
                index++;
                count[val]--;
            }
        }

        vector<vector<int>> ans;

        for(int i = 0; i <n; i += 3){

            if(nums[i +2] -  nums[i] > k){
                return {};
            }

            ans.push_back({nums[i] ,nums[i+1], nums[i+2]});
        }

        return ans;

    }
};