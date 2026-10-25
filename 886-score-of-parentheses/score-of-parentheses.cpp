class Solution {
public:
    int scoreOfParentheses(string s) {
        
        vector<int> vec;// vector as stack

        int n = s.size();

        int score = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == '('){
                vec.push_back(score);
                score = 0;
            }
            else{
                if(s[i-1] == '('){
                    score = vec.back() + 1;
                }
                else{ // nested case
                    score = vec.back() + (2 * score);
                }
                vec.pop_back();
            }
        }
        return score;
    }
};