class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count = 0;

        for(auto &num : nums){
            string s = to_string(num);

            int n = s.size();
        
        if(n % 2 == 0){
            count++;
        }
        }
        return count;
    }
};