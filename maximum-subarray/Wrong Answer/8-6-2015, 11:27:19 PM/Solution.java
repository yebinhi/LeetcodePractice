// https://leetcode.com/problems/maximum-subarray

public class Solution {
    public int maxSubArray(int[] nums) {
        int[] result = new int[nums.length];
        result[0] = nums[0];
        int answer = result[0];
        for(int i =1; i<nums.length; i++){
            result[i] = Math.max(nums[i-1]+nums[i], nums[i-1]);
            answer = Math.max(result[i], nums[i]);
        }
        return answer;
    }
}