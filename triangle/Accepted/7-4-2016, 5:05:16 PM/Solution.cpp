// https://leetcode.com/problems/triangle

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int r= triangle.size();
        if(r<=0) return 0;
        int c=triangle.size();
        if(c<=0) return 0;
        
        int dp[r];
        
        for(int i=0; i<r; i++) dp[i]=triangle[r-1][i];
        
        for(int i=r-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                dp[j]=triangle[i][j]+ min(dp[j], dp[j+1]);
            }
        }
        return dp[0];
    }
};