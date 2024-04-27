// https://leetcode.com/problems/summary-ranges

public class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> list = new ArrayList<String>();
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
    }
}