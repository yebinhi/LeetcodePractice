// https://leetcode.com/problems/remove-duplicates-from-sorted-array

public class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length == 0){
            return 0;
        }
        if(nums.length == 1){
            return 1;
        }
        int len = nums.length;
        int i =0;
        int j =1;
        while(j<len){
            if(nums[i] == nums[j]){
                j++;
            }else{
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return ++i;
    }
}