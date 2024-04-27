// https://leetcode.com/problems/majority-element

public class Solution {
    public int majorityElement(int[] nums) {
        Array.sort(nums);
        return nums[nums.length/2];
    }
}