class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();

        int count = 0;

        for(auto &num : nums){ // followed given Constraints!

            if((num >= 10 && num <= 99) || (num >= 1000 && num <= 9999) || num == 100000){
                count++;
            }
        }
        return count;
    }
};