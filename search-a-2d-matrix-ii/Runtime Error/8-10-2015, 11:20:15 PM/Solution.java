// https://leetcode.com/problems/search-a-2d-matrix-ii

public class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        
        int start = 0;
        int end = n*m-1;
        while(start < end){
            int mid = (start+end)/2;
            int midx = mid/n;
            int midy = mid%n;
            if(matrix[midx][midy] == target){
                return true;
            }
            if(matrix[midx][midy] < target){
                start = mid+1;
            }
            if(matrix[midx][midy] > target){
                end = mid-1;
            }
        }
        return false;
    }
}