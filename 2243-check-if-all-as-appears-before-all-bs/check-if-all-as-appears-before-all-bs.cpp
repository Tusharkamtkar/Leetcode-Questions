class Solution {
public:
    bool checkString(string s) {
        
        int countof_A = count(s.begin(), s.end(), 'a'); // shortcut for finding an el

        for(int i = 0; i < countof_A; i++){

            if(s[i] != 'a'){
                return false;
            }
        }
        return true;
    }
};