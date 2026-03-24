class Solution {
public:
    int reverse(int x) {
        long long revNum = 0;
        bool neg = false;
        long cond = pow(2,31);
        if(x>=cond)return 0;
        if(x<0){
            if(x<=-cond)return 0;
            neg=true;
        x=-x;}
       
        while(x > 0){
            int ld = x % 10;
            x = x / 10;
            revNum = (revNum * 10) + ld;
        }
        if(neg && revNum>cond){
return 0;
        }
        else if( revNum>cond-1){
return 0;
        }
        return neg?-revNum:revNum;
    }
};