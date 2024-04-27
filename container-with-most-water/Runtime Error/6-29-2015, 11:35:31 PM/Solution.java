// https://leetcode.com/problems/container-with-most-water

public class Solution {
    public int maxArea(int[] height) {
	
     int result=0;
	for(int i=0,j=height.length-1;i<j;){
		
		int area=Math.min(height[i], height[j])*(j-i);
		
		result=Math.max(area, result);
		
		if(height[i]<height[j]){
			i++;
		}else{
			j++;
		}
	}
	
	
	return result;
        
    }
}