class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n <= 0){
            return 0;
        }
        
        int temp = 1;

        while(temp <= n/2){
            temp = temp * 2;
        }
        return temp == n;
    }
};