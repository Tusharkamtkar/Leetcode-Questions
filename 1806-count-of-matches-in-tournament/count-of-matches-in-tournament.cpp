class Solution {
public:
    int numberOfMatches(int n) {
        
        int result = 0;
        int match = 0;

        while(n > 1){
            match = n/2;

            result += match;

            n = n - match;
        }
        return result;
    }
};