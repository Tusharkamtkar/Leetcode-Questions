class Solution {
public:

    bool check(vector<int> &arr){

        sort(arr.begin(), arr.end());

        int m  = arr.size();

        int diff = arr[1] - arr[0];

        for(int i = 2; i < m; i++){
            if(arr[i] - arr[i-1] != diff){
                return false;
            }
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        int n = l.size();

        vector<bool> result;

        for(int i = 0; i < n; i++){

            int start = l[i];
            int end = r[i];

            vector<int> arr(nums.begin() + start, nums.begin() + end + 1);

            bool isAp = check(arr);

            result.push_back(isAp);
        }
        return result;
    }
};