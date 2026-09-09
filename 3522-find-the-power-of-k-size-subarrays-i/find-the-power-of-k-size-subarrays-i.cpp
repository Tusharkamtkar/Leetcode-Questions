class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        
        int n  = nums.size();

        deque<int> deq;

        vector<int> result;

        for(int i = 0; i < n; i++){

            if(deq.size() == k){
                deq.pop_front();
            }

            if(!deq.empty() && deq.back() != nums[i]-1){
                deq.clear();
            }

            deq.push_back(nums[i]);

            if(i >= k-1){

                if(deq.size() == k){
                    result.push_back(deq.back());
                }
                else{
                    result.push_back(-1);
                }
            }
        }
        return result;
    }
};