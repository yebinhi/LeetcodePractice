// https://leetcode.com/problems/paint-house

public class Solution {
    public int minCost(int[][] costs) {
        len = costs.length;
        if(len == 0){
            return 0;
        }
        
        for(int i =0; i<len; i++){
            costs[i][0] = Math.min(costs[i-1][1], cost[i-1][2]);
            costs[i][1] = Math.min(costs[i-1][0], cost[i-1][2]);
            costs[i][2] = Math.min(costs[i-1][0], cost[i-1][1]);
        }
        
        return Math.min(Math.min(costs[len-1][0], costs[len-1][1]), costs[len-1][2]);
    }
}