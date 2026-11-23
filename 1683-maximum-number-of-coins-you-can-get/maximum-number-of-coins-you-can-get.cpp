class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int n = piles.size();

        sort(piles.begin(), piles.end());

        int me  = n-2;
        int bob = 0;  // we dont need bob at all

        int count = 0;

        while(bob < me){

            count += piles[me];

            me  -= 2;
            bob += 1;
        }

        return count;
    }
};