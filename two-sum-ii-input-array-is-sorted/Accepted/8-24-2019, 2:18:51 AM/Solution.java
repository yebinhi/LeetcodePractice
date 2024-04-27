// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int l=0, r=numbers.length-1;
        while(l<r){
            int sum = numbers[l]+numbers[r];
            if(sum > target) r--;
            if(sum < target) l++;
            if(sum == target){
                return new int[]{l+1, r+1};
            }
        }
        return new int[]{};
    }
}