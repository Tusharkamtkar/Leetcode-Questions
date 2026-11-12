class Solution {
public:
    typedef long long LL;

    long long flowerGame(int n, int m) {
        
        LL oddN  = ceil(n+1) / 2;
        LL evenN = floor(n/2);

        LL oddM  = ceil(m+1) / 2;
        LL evenM = floor(m/2);

        LL ans = (oddN * evenM) + (oddM * evenN);

        return ans;
    }
};