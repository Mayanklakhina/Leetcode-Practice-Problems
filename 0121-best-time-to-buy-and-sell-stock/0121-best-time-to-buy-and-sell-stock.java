class Solution {
    public int maxProfit(int[] prices) {
        int profit=0;
        int minelem = prices[0];
        for(int i = 1; i < prices.length; i++){
            minelem = Math.min(prices[i], minelem);
            profit = Math.max(profit, (prices[i]-minelem));
        }
        return profit;
    }
}