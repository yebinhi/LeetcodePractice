// https://leetcode.com/problems/maximum-subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n<=0) return 0;
        
        int dp[n], maxSum;
        dp[0]=maxSum=nums[0];
        for(int i=1; i<n; i++){
            dp[i]=max(nums[i]+dp[i-1], nums[i]);
            maxSum=max(maxSum, dp[i]);
        }
        return maxSum;
    }
};