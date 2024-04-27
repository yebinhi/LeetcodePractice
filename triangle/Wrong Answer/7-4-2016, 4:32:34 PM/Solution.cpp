// https://leetcode.com/problems/triangle

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        if(m<=0) return 0;
        int n=triangle[0].size();
        if(n<=0) return 0;
        int total=0;
        for(int i=0; i<m; i++){
            sort(triangle[i].begin(), triangle[i].end());
            total+=triangle[i][0];
        }
        return total;
    }
};