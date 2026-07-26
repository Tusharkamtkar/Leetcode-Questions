class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int n = words.size();

        vector<int> charFreq(26, 0);

        for (char& ch : chars) {
            charFreq[ch - 'a']++;
        }

        int result = 0;

        for (string& word : words) {

            vector<int> wordFreq(26, 0);
            for (char& ch : word) {
                wordFreq[ch - 'a']++;
            }

            bool check = true;

            for (int i = 0; i < 26; i++) {
                if (wordFreq[i] > charFreq[i]) {
                    check = false;
                    break;
                }
            }
            if (check == true) {
                result += word.size();
            }
        }
        return result;
    }
};