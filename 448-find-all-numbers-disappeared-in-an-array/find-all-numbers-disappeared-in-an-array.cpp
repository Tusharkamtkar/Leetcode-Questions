class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<int> ans;

        while(i < n){
            // place no's at there right places!
            // cyclic sort!

            int correctIndex = nums[i] - 1;

            if(nums[i] != nums[correctIndex]){
                swap(nums[i], nums[correctIndex]);
            }
            else{
                i++;
            }
        }
        for(int i = 0; i<n; i++){
            // check if no's are at there correct positions or not!
            // if i is there but i + 1 is not it means it is the missing element!
            if(nums[i] != i+1){
                ans.push_back(i+1);
            }
        }
        return ans;

    }
};