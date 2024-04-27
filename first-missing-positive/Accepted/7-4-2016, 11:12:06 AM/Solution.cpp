// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());  
        int res = 0;  
        int i = 0;  
        while (i<n && nums[i]<=0) i++;  
        for (; i < n; i++)  
        { 
            if (i>0 && nums[i] == nums[i-1]) continue;  
            if (nums[i] - res != 1) return res+1;  
            else res = nums[i];  
        }  
        return res+1; 
    }
};