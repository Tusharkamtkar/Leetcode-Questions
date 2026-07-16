class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        stringstream ss(s); // tokonizing

        string token = "";
        string ans = "";

        while(ss >> token){
            reverse(token.begin(), token.end());
            ans += token + ' ';
            

        }
        // ans.pop_back(); // trailing blank space
        return ans.substr(0, ans.size()-1);
    }
};