class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        int m = t.size();

        int diff_s[26] = {0};
        int diff_t[26] = {0};

        for(int i = 0; i < n; i++){
            diff_s[s[i] - 'a']++;
            diff_t[t[i] - 'a']++;
        }
        int result = 0;

        for(int i = 0; i < 26; i++){
            if(diff_s[i] > diff_t[i]){
                result += diff_s[i] - diff_t[i];
            }
        }
        return result;
    }
};