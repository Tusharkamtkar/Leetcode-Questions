class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();

        int diff[26] = {0};

        for(int i = 0; i < n; i++){
            diff[s[i] - 'a']++;
            diff[t[i] - 'a']--;
        }
        int result = 0;
        for(int i = 0; i < 26; i++){
            if(diff[i] > 0){
                result += diff[i];
            }
        }
        return result;
    }
};