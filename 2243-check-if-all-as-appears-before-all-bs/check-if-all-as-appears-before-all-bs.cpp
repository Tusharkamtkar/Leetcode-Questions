class Solution {
public:
    bool checkString(string s) {
        
        int n = s.size();

        int lastIdxofA  = -1;
        int firstIdxofB = -1;

        for(int i = 0; i < n; i++){

            if(s[i] == 'a'){
                lastIdxofA = i;
            }
        }

        for(int i = 0; i < n; i++){

            if(s[i] == 'b'){
                firstIdxofB = i;
                break;
            }
        }

        if(lastIdxofA < firstIdxofB){
            return true;
        }

        if(firstIdxofB == -1 || lastIdxofA == -1){
            return true;
        }

        return false;
    }
};