// https://leetcode.com/problems/house-robber

public class Solution {
    public int rob(int[] nums) {
        if(nums == null || nums.length == 0){
            return 0;
        }
        int[] dp = new int[nums.length];
        dp[0]=0;
        dp[1]=nums[0];
        for(int i =2; i<nums.length+1; i++){
            dp[i]=Math.max(dp[i-1], dp[i]+nums[i-1]);
        }
        return dp[nums.length];
    }
}