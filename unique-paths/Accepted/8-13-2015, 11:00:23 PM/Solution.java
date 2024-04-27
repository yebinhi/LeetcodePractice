// https://leetcode.com/problems/unique-paths

public class Solution {
    public int uniquePaths(int m, int n) {
        if(m == 0||n ==0){
            return 0;
        }
        if(m ==1 || n ==1){
            return 1;
        }
        int dp[][] = new int[m][n];
        for(int i =0; i<n; i++){
            dp[0][i]=1;
        }
        for(int i =0; i<m; i++){
            dp[i][0]=1;
        }
        
        for(int i =1; i<n; i++){
            for(int j =1; j<m; j++){
                dp[j][i]=dp[j-1][i]+dp[j][i-1];
            }
        }
        return dp[m-1][n-1];
    }
}