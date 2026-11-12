class Solution {
public:
    long long flowerGame(int n, int m) {
        
        // one liner sols

        return 1LL * (ceil(n/2.0) * floor(m/2)) + 1LL * (ceil(m/2.0) * floor(n/2));
    }
};