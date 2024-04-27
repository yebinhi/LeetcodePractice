// https://leetcode.com/problems/two-sum

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> numbers = new HashMap<>();
        for(int i=0; i<nums.length; i++){
            if(numbers.containsKey(target - nums[i])){
                return new int[] {numbers.get(target - nums[i]), i};
            }
            numbers.put(nums[1], i);
        }
        return new int[] {};
    }
}