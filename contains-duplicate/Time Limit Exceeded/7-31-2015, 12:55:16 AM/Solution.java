// https://leetcode.com/problems/contains-duplicate

public class Solution {
    public boolean containsDuplicate(int[] nums) {
        if(nums.length <= 1){
            return true;
        }
        for(int i =0; i < nums.length; i++){
            for(int j=i+1; j < nums.length; j++){
                if(nums[i] == nums[j]){
                    return false;
                }
            }
        }
        return true;
    }
}