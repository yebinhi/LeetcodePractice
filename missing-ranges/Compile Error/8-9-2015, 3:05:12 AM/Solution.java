// https://leetcode.com/problems/missing-ranges

public class Solution {
    public List<String> findMissingRanges(int[] nums, int lower, int upper) {
        List<String> result = new ArrayList<String>();
        if(nums == null || nums.length ==0){
            return result;
        }
        int pre = lower-1;
        int curr;
        for(int i =0; i<nums.length; i++){
            int curr = (i == nums.length-1)? end : nums[i];
            if((curr-pre)>=2){
                result.add(pre+1 +  "->" + curr-1);
            }
            pre = curr;
        }
    }
    
    public String getRange(int from, int to){
        return from == to ? String.valueOf(from) : from + "->" + to; 
    }
}