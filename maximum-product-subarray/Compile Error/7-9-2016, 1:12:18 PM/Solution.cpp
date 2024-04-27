// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n<=0) return 0;
        
        int maxP, minP, maxR;
        maxP=minP=nums[0];
        for(int i=1; i<n; i++){
            int tmp=maxp;
            maxP=max(max(maxP*nums[i-1], minP*nums[i-1]), nums[i]);
            minP=min(min(maxP*nums[i-1], minP*nums[i-1]), nums[i]);
            maxR=max(maxR, maxP);
        }
        return maxR;
    }
};