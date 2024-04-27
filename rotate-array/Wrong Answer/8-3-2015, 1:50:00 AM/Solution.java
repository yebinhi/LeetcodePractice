// https://leetcode.com/problems/rotate-array

public class Solution {
    public void rotate(int[] nums, int k) {
        if(k > nums.length) 
        k=k%nums.length;
 
    int[] result = new int[nums.length];
 
    for(int i=0; i < k; i++){
        result[i] = nums[nums.length-k+i];
    }
 
    int j=0;
    for(int i=k; i<nums.length; i++){
        result[i] = nums[j];
        j++;
    }
 
    nums = result;
    }
}