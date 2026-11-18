class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int n = s.size();

        int result = 0;

        vector<int> mpp(3, 0); // a,b,c

        int i = 0;
        int j = 0;

        while(j < n){

            char ch = s[j];

            mpp[ch - 'a']++;

            while(mpp[0] > 0 && mpp[1] > 0 && mpp[2] > 0){

                result += (n - j); // all the substrings from that idx

                mpp[s[i] - 'a']--;
                i++;
            }
            j++;
        }
        return result;
    }
};