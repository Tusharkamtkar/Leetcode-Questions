class Solution {
public:
    bool canBeValid(string s, string locked) {
        
        int n = s.size();

        if(n % 2 != 0) return false; // odd

        int open  = 0;
        int close = 0;

        for(int i = 0; i < n; i++){ // Left to Right traversall
            if(s[i] == '(' || locked[i] == '0'){
                open++;
            }
            else{
                open--;
            }
            if(open < 0) return false;
        }

        for(int i = n-1; i >= 0; i--){ // Right to Left traversall
            if(s[i] == ')' || locked[i] == '0'){
                close++;
            }
            else{
                close--;
            }
            if(close < 0) return false;
        }
        
        return true;
    }
};