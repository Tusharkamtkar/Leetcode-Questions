class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n <= 0) return 0;

        int count = __builtin_popcount(n); // builtin fun

        return count == 1;
    }
};