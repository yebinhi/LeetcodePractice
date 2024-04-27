// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n<=0) return 0;
        
        int curMax, curMin, maxSum;
        curMax=curMin=maxSum=nums[0];
        for(int i=0; i<n; i++){
            int tmp=curMax;
            curMax=max(max(curMax*nums[i], curMin*nums[i]), nums[i]);
            curMin=min(min(tmp*nums[i], curMin*nums[i]), nums[i]);
            maxSum=max(maxSum, curMin);
        }
        return maxSum;
    }
};