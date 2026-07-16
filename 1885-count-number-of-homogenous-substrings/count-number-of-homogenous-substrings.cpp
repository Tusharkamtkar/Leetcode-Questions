class Solution {
public:
    int countHomogenous(string s) {
        char prev;
        int currCount = 0;
        // int n = sisize();
        int mod = 1e9+7;
        int ans = 0;

        for(char &c : s){
            
            if(c == prev){
                currCount++;
            }
            else{
                prev = c;
                currCount = 1;
            }

            ans = (ans + currCount) % mod;

        }
        return ans;
    }
};