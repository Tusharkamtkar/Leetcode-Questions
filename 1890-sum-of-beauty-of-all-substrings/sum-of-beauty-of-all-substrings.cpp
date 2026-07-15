class Solution {
public:
    int beautySum(string s) {
        int total_beauty = 0;

        int n = s.size();

        for(int i = 0; i < n; i++){
            int freq[26] = {0};
            for(int j = i; j < n; j++){
                freq[s[j] - 'a']++;
                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(int k = 0; k < 26; k++){
                    if(freq[k] > 0){
                        mini = min(mini, freq[k]);
                        maxi = max(maxi, freq[k]);
                    }
                }
                total_beauty += (maxi - mini);
            }
        }
        return total_beauty;
    }
};