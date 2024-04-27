// https://leetcode.com/problems/maximum-subarray

public class Solution {
    public int maxSubArray(int[] nums) {
        int[] result = new int[nums.length];
        result[0] = nums[0];
        for(int i =1; i<nums.length; i++){
            result[i] = Math.max(nums[i-1]+nums[i], nums[i-1]);
        }
        return result[nums.length];
    }
}