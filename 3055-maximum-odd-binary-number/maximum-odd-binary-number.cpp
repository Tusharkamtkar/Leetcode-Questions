class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();

        string result = string(n, '0');

        int count_1 = count(s.begin(), s.end(), '1'); // stl (count)

        int i = 0;
        while(count_1 > 1){ // coz one '1' is always belongs to LSB for odd result
            result[i] = '1';
            i++;
            count_1--;
        }
        result[n-1] = '1';

        return result;
    }
};