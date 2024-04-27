// https://leetcode.com/problems/contains-duplicate-ii

public class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Set<Integer> set = HashSet<Integer>();
        for(int i =0; i < nums.length; i++){
            if(i>=k){
                set.remove(nums[i-k]);
            }
            if(!set.add(nums[i])){
                return true;
            }
            
        }
    }
}