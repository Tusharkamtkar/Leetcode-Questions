class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int length = flowerbed.size();

        if (n == 0)
            return true;

        for (int i = 0; i < length; i++) {

            if (flowerbed[i] == 0) {

                bool leftSide = (i == 0) || flowerbed[i - 1] == 0;
                bool rightSide = (i == length - 1) || flowerbed[i + 1] == 0;

                if (leftSide && rightSide) {
                    flowerbed[i] = 1;
                    n--;

                    if (n == 0)
                        return true;
                }
            }
        }
        return false;
    }
};