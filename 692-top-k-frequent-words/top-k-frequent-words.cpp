class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string, int> freq;

        for(auto &word : words){
            freq[word]++;
        }

        vector <pair<string, int>> vec;

        for(auto &it : freq){
            vec.push_back({it.first, it.second});
        }

        auto lambda = [] (pair<string, int> &p1, pair<string, int> &p2){ // Comprator!

            if(p1.second == p2.second){
                return p1.first < p2.first;
            }

            return p1.second > p2.second;
        };

        sort(vec.begin(), vec.end(), lambda); // lambda = comptrartor

        int i = 0;
        vector<string> result(k);

        while(i < k){
            result[i] = vec[i].first;
            i++;
        }
        return result;
    }
};