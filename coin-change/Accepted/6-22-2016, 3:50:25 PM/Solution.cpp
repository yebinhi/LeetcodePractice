// https://leetcode.com/problems/coin-change

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int len = coins.size();
        if(len <= 0) return 0;
        
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        for(auto coin:coins){
            for(int i = coin; i <= amount; i++){
                if(dp[i-coin] != INT_MAX){
                    dp[i] = min(dp[i], dp[i-coin] + 1);
                }
            }
        }
        return (dp[amount] == INT_MAX) ? -1 : dp[amount];
    }
};