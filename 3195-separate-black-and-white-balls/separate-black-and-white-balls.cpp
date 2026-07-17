class Solution {
public:
    long long minimumSteps(string s) {
        // int n = s.size();

        long long ans = 0;
        int ones = 0;

        for(char ch : s){
            if(ch == '1'){
                ones++;
            }
            else{
                ans += ones;
            }
        }
        return ans;
    }
};