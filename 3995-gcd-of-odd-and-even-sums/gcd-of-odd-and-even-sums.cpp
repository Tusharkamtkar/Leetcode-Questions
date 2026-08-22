class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        return n * __gcd(n, (n+1));
    }
};