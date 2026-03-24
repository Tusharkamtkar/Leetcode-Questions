class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long revNum = 0;
        int n =x;
        while(x > 0){
            int ld = x % 10;
            x = x / 10;
            revNum = (revNum * 10) + ld;
        }
        // cout<<revNum;
        return revNum == n;
        
    }
};