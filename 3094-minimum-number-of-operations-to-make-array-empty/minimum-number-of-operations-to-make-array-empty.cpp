class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        unordered_map<int, int> mpp;

        for(int &num : nums){
            
            mpp[num]++;
        }

        int result = 0;

        for(auto &it : mpp){

            int freq = it.second;

            if(freq == 1){
                return -1;
            }

            result += ceil((double)freq / 3);
        }

        return result; 
    }
};