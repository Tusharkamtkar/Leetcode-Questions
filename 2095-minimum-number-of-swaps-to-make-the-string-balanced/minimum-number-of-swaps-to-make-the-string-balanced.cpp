class Solution {
public:
    int minSwaps(string s) {
        
        int size = 0;

        for(char &ch : s){

            if(ch == '['){
                size++;
            }
            else if(size > 0){
                size--;
            }
        }

        int swaps = (size + 1) / 2;

        return swaps;
    }
};