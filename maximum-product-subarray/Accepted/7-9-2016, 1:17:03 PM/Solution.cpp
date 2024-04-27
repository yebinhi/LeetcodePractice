// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n<=0) return 0;
        
        int maxP, minP, maxR;
        maxP=minP=maxR=nums[0];
        for(int i=1; i<n; i++){
            int tmp=maxP;
            maxP=max(max(maxP*nums[i], minP*nums[i]), nums[i]);
            minP=min(min(tmp*nums[i], minP*nums[i]), nums[i]);
            maxR=max(maxR, maxP);
        }
        return maxR;
    }
};