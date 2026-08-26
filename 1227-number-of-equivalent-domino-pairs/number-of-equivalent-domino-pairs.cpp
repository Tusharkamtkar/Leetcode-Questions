class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        
        map<pair<int, int>, int> mp;

        for(auto &domino : dominoes){

            if(domino[0] > domino[1]){
                swap(domino[0], domino[1]);
            }

            mp[{domino[0] , domino[1]}]++;
        }

        int result = 0;

        for(auto it : mp){
            int freq = it.second;

            result += freq * (freq - 1) / 2; // freqC2!
        }

        return result;

    }
};