// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(), curMax, curMin, res;
        if(n<=0) return 0;
        res=curMax=curMin=nums[0];
        for(int i=1; i<n; i++){
            int temp=curMax;
            curMax=max(max(curMax*nums[i], curMin*nums[i]), nums[i]);
            curMin=min(min(temp*nums[i], curMin*nums[i]), nums[i]);
            res=max(res, curMax);
        }
        return res;
    }
};