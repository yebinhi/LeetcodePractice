// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target) return i;
            if(nums[i]>target){
                if(i==0){
                    return 0;
                }
                return i-1;
            }
        }
        return nums.size()+1;
    }
};