// https://leetcode.com/problems/maximum-subarray

public class Solution {
    public int maxSubArray(int[] nums) {
        int[] result = new int[nums.length];
        result[0] = nums[0];
        int answer = result[0];
        for(int i =1; i<nums.length; i++){
            result[i] = Math.max(result[i-1]+nums[i], nums[i]);
            answer = Math.max(result[i], answer);
        }
        return answer;
    }
}