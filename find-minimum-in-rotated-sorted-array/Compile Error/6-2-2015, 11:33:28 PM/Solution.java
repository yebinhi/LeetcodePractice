// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

public class Solution {
   
public int findMinVal(int l, int h, int[] nums) {
    int mid = (l+h)/2;
    if (l >= h) return nums[l];
    if(nums[mid]<nums[h]) return findMinVal(l, mid, nums);
    else return findMinVal(mid+1, h, nums);
    }

public int findMin(int[] nums) {
   int res = findMinVal(0, nums.length-1, nums);
   return res;
}
