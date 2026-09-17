class Solution {
public:

    bool check(vector<int> &arr){

        int m = arr.size();

        int minEl = INT_MAX;
        int maxEl = INT_MIN;

        unordered_set<int> st;

        for(int &num : arr){

            minEl = min(minEl, num);
            maxEl = max(maxEl, num);

            st.insert(num);
        }

        if((maxEl - minEl) % (m-1) != 0){
            return false;
        }

        int diff = (maxEl - minEl) / (m-1); // common diff.

        int currEl = minEl + diff;

        while(currEl < maxEl){

            if(st.find(currEl) == st.end()){
                return false;
            }
            currEl += diff; // Ap = currEl, currEl+diff, currEl + 2diff...
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = l.size();

        vector<bool> result;

        for(int i = 0; i < n; i++){

            int start = l[i];
            int end = r[i];

            vector<int>arr(nums.begin() + start, nums.begin() + end + 1);

            bool isAp = check(arr);

            result.push_back(isAp);
        }
        return result;
    }
};