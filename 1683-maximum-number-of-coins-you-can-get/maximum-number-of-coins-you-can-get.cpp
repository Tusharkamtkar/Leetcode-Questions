class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int n = piles.size();

        sort(piles.begin(), piles.end());

        int count = 0;

        for(int i = n/3; i < n; i +=2){

            count += piles[i];
        }

        return count;
    }
};