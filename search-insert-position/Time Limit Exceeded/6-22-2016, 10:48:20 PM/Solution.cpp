// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(len <= 0) return 0;
        
        int start =0, end = len-1;
        
        while(start<end){
            int m=(start+end)/2;
            if(nums[m]<target){
                end = m-1;
            }else{
                start = m;
            }
        }
        return nums[start]< target ? start+1 :start; 
    }
};