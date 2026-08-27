class Solution {
public:
    int countSymmetricIntegers(int low, int high) {

        int count = 0;

        for (int num = low; num <= high; num++) {

            if (num >= 10 && num <= 99 &&
                num % 11 == 0) { // all symetric no. of 2 digit nos.
                count++;
            } else if (num >= 1000 && num <= 9999) {

                int firstDigit = (num / 1000);
                int secondDigit = (num / 100) % 10;

                int thirdsDigit = (num / 10) % 10;
                int fourthDigit = (num / 1) % 10;

                if ((firstDigit + secondDigit) == (thirdsDigit + fourthDigit)) {
                    count++;
                }
            }
        }
        return count;
    }
};