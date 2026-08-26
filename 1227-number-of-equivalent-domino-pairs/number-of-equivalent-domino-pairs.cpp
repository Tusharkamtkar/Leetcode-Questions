class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        
        map<string, int> mp;

        for(auto &domino : dominoes){
            if(domino[0] > domino[1]){
                swap(domino[0], domino[1]);
            }

            string key = to_string(domino[0]) + to_string(domino[1]);

            mp[key]++;
        }

        int result = 0;

        for(auto &it : mp){

            result += it.second * (it.second - 1) / 2;
        }
        return result;

    }
};