class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();

        vector<pair<int, int>> indices(26, {-1, -1});

        // Store first and last occurrence of every character
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'a';

            if (indices[idx].first == -1) {
                indices[idx].first = i;
            }
            indices[idx].second = i;
        }

        int result = 0;

        // Count distinct middle characters
        for (int i = 0; i < 26; i++) {
            int left_idx = indices[i].first;
            int right_idx = indices[i].second;

            if (left_idx == -1 || left_idx == right_idx) {
                continue;
            }

            unordered_set<char> st;

            for (int middle = left_idx + 1; middle < right_idx; middle++) {
                st.insert(s[middle]);
            }

            result += st.size();
        }

        return result;
    }
};