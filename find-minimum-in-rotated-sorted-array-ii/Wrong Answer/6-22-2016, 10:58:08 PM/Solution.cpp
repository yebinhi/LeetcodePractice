// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii

class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        if(len <= 0) return 0;
        
        int start = 0, end=len-1;
        while(start<end){
            int m= (start+end)/2;
            if(nums[m]<nums[0]){
                start = m+1;
            }else {
                end = m;
            }
        }
        return nums[start];
    }
};