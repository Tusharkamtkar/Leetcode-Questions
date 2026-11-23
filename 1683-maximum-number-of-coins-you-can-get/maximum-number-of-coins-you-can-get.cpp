class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int n = piles.size();

        sort(piles.begin(), piles.end());

        int A = n-1;  // Alice
        int M = n-2; // Me
        int B = 0;  // Bob

        int coins = 0;

        while(B < M){

            coins += piles[M];

            A -= 2;
            M -= 2;
            B += 1;
        }

        return coins;
    }
};