class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.size();

        int m = n - numFriends + 1;

        if(numFriends == 1)
        return word;

        string result;

        for(int i = 0; i < n; i++){
            result = max(result, word.substr(i, m));
        }
        return result;
    }
};