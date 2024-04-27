// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

public class Solution {
public int removeDuplicates(int[] nums) {
	
	int i=0;
	int count=1;
	int len=1;
	while(i<(nums.length-1)){
		if(nums[i]==nums[i+1]){
			count++;
			if(count<=2){
				
				len++;
				i++;
				
			}else{
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