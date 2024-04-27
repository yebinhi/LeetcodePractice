// https://leetcode.com/problems/missing-ranges

public class Solution {
    public List<String> findMissingRanges(int[] nums, int lower, int upper) {
        List<String> result = new ArrayList<String>();
        int len = nums.length;
        if(len == 0){
            return result;
        }
        
        int pre = lower-1;
        for(int i = 0; i < len; i++){
            int cur = (i == (len-1)) ? upper+1 : nums[i];
            if((cur - pre) >=2){
                result.add(getRange(pre+1, cur-1));
            }
            pre = cur;
            
        }
        
        
    }
    public String getRange(int fro, int to){
        if(fro == to){
            return String.valueOf(fro);
        }
        return String.valueOf(fro)+"->"+String.valueOf(to);
    }
}