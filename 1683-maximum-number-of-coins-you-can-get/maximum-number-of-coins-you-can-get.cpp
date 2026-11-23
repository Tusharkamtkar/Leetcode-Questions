class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int n = piles.size();

        sort(piles.begin(), piles.end());

        int count = 0;

        for(int me = n/3; me < n; me += 2){

            count += piles[me];
        }

        return count;
    }
};