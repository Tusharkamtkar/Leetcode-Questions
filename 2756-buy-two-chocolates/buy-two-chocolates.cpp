class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n  = prices.size();

        sort(prices.begin(), prices.end());

        
        for(int i = 0; i < n; i++){
            int choPrice = prices[i] + prices[i+1];

            if(choPrice <= money){
                return money - choPrice;
            }
            else{
                break;
            }
        }
        return money;
    }
};