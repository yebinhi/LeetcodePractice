// https://leetcode.com/problems/unique-paths-ii

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        if(m<=0) return 0;
        int n=obstacleGrid[0].size();
        if(n<=0) return 0;
        int num[m][n];
        num[0][0]=1;
        for(int i=1; i<m; i++){
            if(obstacleGrid[i][0] == 1)
                num[i][0]=0;
            else 
                num[i][0]=num[i-1][0];
        }
        
        for(int i=1; i<n; i++){
            if(obstacleGrid[0][i] == 1) 
                num[0][i]=0;
            else 
                num[0][i]=num[0][i-1];
        }
        
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(obstacleGrid[i][j]==1)
                    num[i][j]=0;
                else 
                    num[i][j]=num[i-1][j]+num[i][j-1];
            }
        }
        return num[m-1][n-1];
    }
};