// https://leetcode.com/problems/single-number

public class Solution {
    public int singleNumber(int[] nums) {
        Set<Integer> set = new HashSet<Integer>();
        for(int x : nums){
            if(set.contains(x)){
                set.remove(x);
            }else {
                set.add(x);
            }
        }
        return set.iterator().next();
    }
}