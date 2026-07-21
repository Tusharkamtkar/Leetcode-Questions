class Solution {
public:

    bool allZeros(vector<int> counter) {
        for (int &i : counter){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();

        vector<int> counter(26, 0);

        for(int i = 0; i < p.size(); i++){
            char ch = p[i];

            counter[ch - 'a']++;
        }

        int i = 0, j = 0;
        int k = p.size();
        vector<int> result;

        while(j < n){
            counter[s[j] - 'a']--;

            if((j - i + 1) == k){
                if(allZeros(counter)){
                    result.push_back(i);
                }
                counter[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};