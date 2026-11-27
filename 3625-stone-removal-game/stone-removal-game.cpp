class Solution {
public:
    bool canAliceWin(int n) {
        
        int take = 10;

        int steps = 0;

        while(n >= take){

            n -= take;

            take--; // 9, 8 , 7 ...

            steps++;
        }

        if(steps % 2 == 0){
            return false;
        }
        return true;
    }
};