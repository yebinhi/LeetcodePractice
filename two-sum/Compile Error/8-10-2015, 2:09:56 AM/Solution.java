// https://leetcode.com/problems/two-sum

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<int> map = new HashMap<int>();
        int len = nums.length;
        for(int i =0; i<len; i++){
            int x = nums[i];
            if(map.containsKey(target - x)){
                return new int[] {map.get(target-x)+1, i+1};
            }
            map.put(x, i);
        }
    }
}