class Solution {
public:
    int minOperations(string s) {
        
        int n = s.size();

        if(is_sorted(s.begin(), s.end())){
            return 0;
        }

        if(n == 2){
            return -1; // we dont sort "ba" coz we have to select substring always
        }

        char minChar = *min_element(s.begin(), s.end());
        char maxChar = *max_element(s.begin(), s.end());

        if(s[0] == minChar || s[n-1] == maxChar){
            return 1;
        }

        char minInMid = *min_element(s.begin() + 1, s.end()-1);
        char maxInMid = *max_element(s.begin() + 1, s.end());

        if(s[0] > maxInMid && s[n-1] < minInMid){
            return 3;
        }

        return 2;
    }
};