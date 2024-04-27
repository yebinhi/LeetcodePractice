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
        for(int i =0; i < nums.length-2; i++){
            if(nums[i+1]-nums[i] > 1 && nums[i] != start){
                list.add(start + "->" + nums[i]);
                start = nums[i+1];
            }else if (nums[i+1]-nums[i] > 1 && nums[i] == start){
                list.add(start+"");
                start = nums[i+1];
            }
        }
        return list;
    }
}