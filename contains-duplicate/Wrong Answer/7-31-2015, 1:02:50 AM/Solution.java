// https://leetcode.com/problems/contains-duplicate

public class Solution {
    public boolean containsDuplicate(int[] nums) {
        
        Set<Integer> set = new HashSet<Integer>();
        for(int i=0; i < nums.length; i++){
            if(!set.add(nums[i])){
                return false;
            }
        }
        return true;
    }
}