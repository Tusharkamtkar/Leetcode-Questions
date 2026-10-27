class Solution {
public:

    string removeSubStr(string &s,string & matchStr){

        stack<char> st;

        for(char ch : s){
            if(ch == matchStr[1] && !st.empty() && st.top() == matchStr[0]){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }

        string temp;

        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());

        return temp;
    }
     
    int maximumGain(string s, int x, int y) {
        
        int n = s.size();
        int score = 0;

        string maxStr = (x >= y) ? "ab" : "ba";
        string minStr = (x >= y) ? "ba" : "ab";

        // first Pass
        string first = removeSubStr(s, maxStr);
        int l = first.size();

        int charRemoved =  (n - l);
        score += (charRemoved / 2) * max(x, y);

        // second Pass
        string second = removeSubStr(first, minStr);
        charRemoved = l - second.size();

        score += (charRemoved / 2) * min(x, y);

        return score;
    }
};