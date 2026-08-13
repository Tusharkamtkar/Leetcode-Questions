class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {

        int n = s.size();

        vector<string> str;

        for (int i = 0; i < n; i += k) {
            string sub = s.substr(i, k);

            if (sub.size() == k)
                str.push_back(sub);

            else if (sub.size() != 0) {
                while (sub.size() < k) {

                    sub += fill;
                }
                str.push_back(sub);
            }
        }

        return str;
    }
};