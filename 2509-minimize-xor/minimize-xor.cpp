class Solution {
public:

    bool isSet(int &x, int bit){
        return x & (1 << bit); // left shift
    }

    bool setBit(int &x, int bit){
        return x |= (1 << bit); // OR op
    }

    bool unsetBit(int&x, int bit){
        return x &= ~(1 << bit); // AND and NOT ops
    }

    int minimizeXor(int num1, int num2) {
        
        int x = num1;

        int requiredBitCount = __builtin_popcount(num2);
        int currentBitCount  = __builtin_popcount(x);

        int bit = 0;

        if(currentBitCount < requiredBitCount){
            while(currentBitCount < requiredBitCount){
                if(!isSet(x, bit)){
                    setBit(x, bit);
                    currentBitCount++;
                }
                bit++;
            }
        }
        else if(currentBitCount > requiredBitCount){
            while(currentBitCount > requiredBitCount){
                if(isSet(x, bit)){
                    unsetBit(x, bit);
                    currentBitCount--;
                }
                bit++;
            }
        }
        return x;
    }
};