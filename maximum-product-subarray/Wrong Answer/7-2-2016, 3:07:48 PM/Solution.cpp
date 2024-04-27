// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n<=0) return 0;
        
        int mnval=nums[0], mxval=nums[0], res=nums[0];
        
        for(int i=1; i<n; i++){
            int mn=mnval, mx=mxval;
            
            int mnval=min(min(nums[i], nums[i]*mx), nums[i]*mn);
            int mxval=max(max(nums[i], nums[i]*mx), nums[i]*mn);
            res=max(res, mxval);
            
        }
        return res;
    }
};