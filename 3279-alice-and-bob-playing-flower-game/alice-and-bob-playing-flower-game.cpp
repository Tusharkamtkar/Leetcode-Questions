class Solution {
public:
    long long flowerGame(int n, int m) {
        
        // one liner sols

        return 1LL * ((n+1) / 2) * (m/2) + 1LL * ((m+1) / 2) * (n/2);
    }
};