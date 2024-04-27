// https://leetcode.com/problems/summary-ranges

public class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> list = new ArrayList<String>();
        if(nums == null || nums.length == 0){
            return list;
        }
        if(nums.length == 1){
            list.add(nums[0]+"");
        }
        
        int start = nums[0];
        int prev=start;
        for(int i =1; i < nums.length-1; i++){
            if((pre+1) == nums[1]){
                prev = nums[i];
            }else{
                if(pre == start){
                    list.add(start+"");
                }
                if(start != pre){
                    list.add(start+"->"+pre);
                }
                start = nums[i];
                pre = nums[i];
                
            }
        }
        return list;
    }
}