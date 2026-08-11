class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> mpp;

        for(int &num : nums1){
            mpp[num]++;
        }

        vector<int> result;

        for(int i = 0; i < nums2.size(); i++){
            int num = nums2[i];

            if(mpp[num] > 0){
                mpp[num]--;
                result.push_back(num);
            }
        }
        return result;
    }
};