// https://leetcode.com/problems/two-sum

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numbers = new HashMap<>();
        for(int i=0; i<nums.length; i++){
            int x = nums[i];
            if(numbers.containsKey(target - x)){
                return new int[] {numbers.get(target - x), i};
            }
            numbers.put(x, i);
        }
        return new int[] {};
    }
}