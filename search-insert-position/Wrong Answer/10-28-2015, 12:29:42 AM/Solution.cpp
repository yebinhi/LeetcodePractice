// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size=nums.size();
        if(size == 1){
            if(nums[0] == target) return 0;
            return nums[0]>target?0:1;
        }
        for(int i=0; i<size;i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i]>target){
                return i-1;
            }
        }
        return size;
    }
};