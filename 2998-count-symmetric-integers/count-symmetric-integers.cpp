class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int count = 0;

        for(int num = low; num <= high; num++){

            string str = to_string(num);

            int len = str.size();

            if(len % 2 != 0){
                continue;
            }

            int leftHalfSum = 0;
            int rightHalfSum = 0;

            for(int i = 0; i < len/2; i++){
                leftHalfSum += str[i] - '0';
            }

            for(int i = len/2; i < len; i++){
                rightHalfSum += str[i] - '0';
            }

            if(leftHalfSum == rightHalfSum){
                count++;
            }
        }
        return count;
    }
};