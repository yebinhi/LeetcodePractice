// https://leetcode.com/problems/missing-ranges

public class Solution {
    public List<String> findMissingRanges(int[] nums, int lower, int upper) {
        List<String> result = new ArrayList<String>();
        int len = nums.length;
        if(len == 0){
            return 0;
        }
        
        int pre = lower-1;
        for(int i = 0; i < len; i++){
            int cur = (i == (len-1)) ? upper+1 : nums[i];
            if((curr - pre) >=2){
                result.add(getRange(pre+1, curr-1));
            }
            pre = curr;
            
        }
        
        
    }
    public String getRange(int fro, int to){
        if(fro == to){
            return String.valueOf(fro);
        }
        return String.valueOf(fro)+"->"+String.valurOf(to);
    }
}