// https://leetcode.com/problems/unique-paths-ii

public class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int m = obstacleGrid.length;
        int n = obstacleGrid[0].length;
        
        if(m == 0 || n == 0){
            return 0;
        }
        if(obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1){
            return 0;
        }
        int dp[][] = new int[m][n];
        
        for(int i =0; i<n; i++){
            if(obstacleGrid[0][i] == 1){
                obstacleGrid[0][i] = 0;
            }else{
                obstacleGrid[0][i]=obstacleGrid[0][i-1];
            }
        }
        for(int i =0; i<m; i++){
            if(obstacleGrid[i][0] == 1){
                obstacleGrid[i][0] = 0;
            }else{
                obstacleGrid[i][0]=obstacleGrid[i-1][0];
            }
        }
        
        for(int i=1; i<m; i++){
            for(int j =1; j<n; j++){
                if(obstacleGrid[i][j] == 1){
                    obstacleGrid[i][j] = 0;
                }else{
                    obstacleGrid[i][j] = obstacleGrid[i-1][j]+obstacleGrid[i][j-1];
                }
            }
        }
    }
}