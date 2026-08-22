class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int oddSum = n*2;
        int evenSum = n*(n+1);

        return __gcd(n*n, n*(n+1));
    }
};