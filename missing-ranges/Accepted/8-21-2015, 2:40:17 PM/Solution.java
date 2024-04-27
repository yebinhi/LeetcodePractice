// https://leetcode.com/problems/missing-ranges

public class Solution {
    public List<String> findMissingRanges(int[] nums, int lower, int upper) {
        List<String> result = new ArrayList<String>();
        int len = nums.length;
        
        int pre = lower-1;
        for(int i = 0; i <=len; i++){
            int cur = ((i == len) ? upper+1 : nums[i]);
            if((cur - pre) >=2){
                result.add(getRange(pre+1, cur-1));
            }
            pre = cur;
        }
        return result;
    }
    
    private String getRange(int fro, int to){
        if(fro == to){
            return String.valueOf(fro);
        }
        return String.valueOf(fro)+"->"+String.valueOf(to);
    }
}