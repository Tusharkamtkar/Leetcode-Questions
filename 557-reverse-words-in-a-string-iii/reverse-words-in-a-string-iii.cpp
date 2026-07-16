class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        stringstream ss(s);

        string w;
        string ans = "";

        while(ss >> w){
          reverse(w.begin(), w.end());
            ans += w;
            ans += ' ';

        }
        ans.pop_back(); // trailing blank space
        return ans;
    }
};