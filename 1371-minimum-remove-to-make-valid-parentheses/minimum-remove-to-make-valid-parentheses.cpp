class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        int n = s.size();

        string ans = "";
        int open = 0;
        for(int i = 0; i < n; i++){

            if(s[i] >= 'a' && s[i] <= 'z'){
                ans.push_back(s[i]);
            }
            else if(s[i] == '('){
                open++;
                ans.push_back(s[i]);
            }
            else if(open > 0){
                open--;
                ans.push_back(s[i]);
            }
        }

        string final_ans = "";
        int close = 0; 
        for(int i = ans.size()-1; i >= 0; i--){

            if(ans[i] >= 'a' && ans[i] <= 'z'){
                final_ans.push_back(ans[i]);
            }
            else if(ans[i] == ')'){
                close++;
                final_ans.push_back(ans[i]);
            }
            else if(close > 0){
                close--;
                final_ans.push_back(ans[i]);
            }
        }

        reverse(final_ans.begin(), final_ans.end());
        
        return final_ans;
    }
};