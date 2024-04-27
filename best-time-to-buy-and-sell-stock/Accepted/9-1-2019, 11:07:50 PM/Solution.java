// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
    public int maxProfit(int[] prices) {
        int max=0;
        for(int i=0; i<prices.length; i++){
            for(int j=i+1; j<prices.length; j++){
                int x = prices[j]-prices[i];
                if(x>0 && x>max){
                    max = x;
                }
            }
        }
        return max;
    }
}