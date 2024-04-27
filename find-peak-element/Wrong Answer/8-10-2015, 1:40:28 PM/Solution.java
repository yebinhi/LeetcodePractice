// https://leetcode.com/problems/find-peak-element

public class Solution {
    public int findPeakElement(int[] nums) {
        if(nums.length <= 1){
            return 0;
        }
        int max = nums[0];
        for(int i =1; i<nums.length-2; i++){
            int prev = nums[i-1];
            int curr = nums[i];
            int next = nums[i+1];
            if(curr>prev && curr>next && curr>max){
                max = curr;
            }
        }
        return max;
    }
}