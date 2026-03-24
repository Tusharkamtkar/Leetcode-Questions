class Solution {
public:
    int reverse(int x) {
        long long revNum = 0;
        bool neg = false;
       
        if(x>INT_MAX || x<=INT_MIN)return 0;
        if(x<0){
            
            neg=true;
        x=-x;}
       
        while(x > 0){
            int ld = x % 10;
            x = x / 10;
            revNum = (revNum * 10) + ld;
        }
     if(revNum > INT_MAX || (neg && -revNum < INT_MIN))return 0;
        return neg?-revNum:revNum;
    }
};