// https://leetcode.com/problems/single-number-ii

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n<=0) return 0;
        int res=0;
        for(int i=31; i>=0; i--){
            int sum=0;
            int mask=1<<i;
            for(int j=0; j<n; j++){
                if(nums[j] & mask) sum++;
                
            }
            res=(res<<1) +(sum%3);
        }
        return res;
    }
};