class Solution {
public:
    long long flowerGame(int n, int m) {
        
        long long oddN  = (n+1) / 2;
        long long evenN = n / 2;

        long long oddM  = (m+1) / 2;
        long long evenM = m / 2;

        long long ans = (oddN * evenM) + (oddM * evenN);

        return ans;
    }
};