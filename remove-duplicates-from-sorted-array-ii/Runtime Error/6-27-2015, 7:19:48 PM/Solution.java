// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

public class Solution {
    public int removeDuplicates(int[] nums) {
	if(nums.length<=2){
		return 2;
	}
	
	int i=0;
	int count=1;
	int len=0;
	while(i<(nums.length-1)){
		if(nums[i]==nums[i+1]){
			if(count<=2){
				count++;
				len++;
				i++;
			}else{
				count++;
				i++;
			}
			
		}else{
			count=1;
			len++;
			i++;
		}
		
	}
	
	
	return len;
        
    }
}