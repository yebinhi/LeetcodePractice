// https://leetcode.com/problems/spiral-matrix-ii

public class Solution {
    public int[][] generateMatrix(int n) {
	
	int[][] matrix=new int[n][n];
	if(n==0){
		return matrix;
	}
	int start=0;
	int end=n-1;
	int val=1;
	while(start<=end){
		for(int i=start; i<=end;i++){
			matrix[start][i]=val;
			val++;
		}
		
		for(int i=start+1; i<=end;i++){
			matrix[i][end]=val;
			val++;
		}
		
		for(int i=end-1; i>=start;i--){
			matrix[end][i]=val;
			val++;
		}
		
		for(int i=end-1;i>start;i--){
			matrix[i][start]=val;
			val++;
		}
		
		start++;
        end--;
	}
	
	
	return matrix;
    
}
}