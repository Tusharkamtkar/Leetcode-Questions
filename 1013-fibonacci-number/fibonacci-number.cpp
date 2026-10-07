class Solution {
public:

    int fibo(int n){ // using recursion!

        if(n <= 1) return n;

        int last = fibo(n-1);
        int Slast = fibo(n-2);

        return last + Slast;
    }
    int fib(int n) {
        
        int ans = fibo(n);

        return ans;
    }
};