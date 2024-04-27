// https://leetcode.com/problems/missing-ranges

public class Solution {
    public List<String> findMissingRanges(int[] nums, int lower, int upper) {
        List<String> result = new ArrayList<String>();
        
        int pre = lower-1;
        for(int i =0; i<=nums.length; i++){
            int curr = (i == nums.length)? upper : nums[i];
            if((curr-pre)>=2){
                result.add(getRange(pre, curr));
            }
            pre = curr;
        }
        return result;
    }
    
    public String getRange(int from, int to){
        return from == to ? String.valueOf(from) : from + "->" + to; 
    }
}