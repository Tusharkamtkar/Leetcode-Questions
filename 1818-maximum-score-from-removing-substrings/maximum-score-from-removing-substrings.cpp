class Solution {
public:

    string removeSubStr(string &s, string &matchStr){
        int i = 0;

        for(int j = 0; j < s.size(); j++){
            s[i] = s[j];
            i++;

            if(i >= 2 && s[i-2] == matchStr[0] && s[i-1] == matchStr[1]){
                i -= 2;
            }
        }
        s.erase(s.begin() + i, s.end());

        return s;
    }
    int maximumGain(string s, int x, int y) {
        
        int n = s.size();

        int score = 0;

        string maxStr = (x >= y) ? "ab" : "ba";
        string minStr = (x >= y) ? "ba" : "ab";

        // first pass
        string first = removeSubStr(s, maxStr);
        int l = first.size();

        int charRemoved = ( n -l);
        score += (charRemoved / 2) * max(x, y);

        // second pass
        string second = removeSubStr(first, minStr);
        
        charRemoved = l - second.size();
        score += (charRemoved / 2) * min(x, y);

        return score;
    }
};