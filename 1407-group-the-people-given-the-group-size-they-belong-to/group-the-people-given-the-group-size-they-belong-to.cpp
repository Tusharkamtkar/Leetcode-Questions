class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        int n = groupSizes.size();

        vector<vector<int>> result;

        vector<vector<int>> mpp(n+1);

        for(int i = 0; i < n; i++){
            int l = groupSizes[i];

            mpp[l].push_back(i);

            if(mpp[l].size() == l){
                result.push_back(mpp[l]);

                mpp[l] = {};
            }
        }
        return result;
    }
};