// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

public class Solution {
    public int findMin(int[] nums) {

	    	int le=nums.length;
	    	int temp=nums[0];
	    	
	    	for(int i=1;i<le;i++){
	    		if(temp>nums[i]){
	    			temp=nums[i];
	    		}
	    	}
			return temp;
  
    }
}