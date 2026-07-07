class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n != m) return false;

        int count[26] = {0};

        for(int i = 0; i < n; i++){
            int index = s[i] - 'a';
            count[index]++;
        }
        for(int i = 0; i < m; i++){
            int index = t[i] - 'a';

            if(count[index] == 0) return false;

            else count[index]--;
        }
        return true;
    }
};