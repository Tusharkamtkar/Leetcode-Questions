class Solution {
    public int maxProfit(int[] prices) {
        int buy = Integer.MAX_VALUE;
        int profit = 0;

        for(int i = 0; i < prices.length; i++){

            // case 1 
            // if(prices[i] == 0) continue;

            // case 2 
            if(buy > prices[i] && i != prices.length-1)
            buy = prices[i];

            // case 3
            if(prices[i]-buy > profit)
            profit = prices[i] - buy;
        }
        return profit;
    }
}