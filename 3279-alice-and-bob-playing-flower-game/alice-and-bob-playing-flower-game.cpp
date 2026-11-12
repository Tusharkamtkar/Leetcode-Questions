class Solution {
public:
    long long flowerGame(int n, int m) {
        
        // using ceil nd floor values

        long long ans = 1LL * (ceil(n/2.0) * floor(m/2.0)) + 
                        1LL * (ceil(m/2.0) * floor(n/2.0));

        return ans;
    }
};