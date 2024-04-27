// https://leetcode.com/problems/first-missing-positive

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        for (int i = 0; i < n; )  
        {  
            if (0<nums[i]&& nums[i]<n && nums[i] != i && nums[nums[i]] != nums[i])   
                swap(nums[i], nums[nums[i]]);  
            else i++;  
        }  
        for (int i = 1; i < n; i++)   
            if (nums[i] != i) return i;  
  
        return nums[0] == n? n+1:n; 
    }
};