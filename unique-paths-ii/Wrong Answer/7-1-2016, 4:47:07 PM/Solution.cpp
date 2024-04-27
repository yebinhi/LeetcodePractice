// https://leetcode.com/problems/unique-paths-ii

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        int num[m][n];
        for(int i=0; i<m; i++){
            if(obstacleGrid[i][0] == 1) break;
            num[i][0]=1;
        }
        
        for(int i=0; i<n; i++){
            if(obstacleGrid[0][i] == 1) break;
            num[0][i]=1;
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