// https://leetcode.com/problems/spiral-matrix-ii

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res;
        if(n==0) return res;
        int row=0, col=-1, m=n, num=0;
        while(true){
            for(int i=0; i<n;i++) res[row][++col]=++num;
            
            if(--m == 0) break;
            for(int i=0; i<m; i++) res[++row][col]=++num;
            
            if(--n == 0) break;
            for(int i=0; i<n; i++) res[row][--col]=++num;
            
            if(--m == 0) break;
            for(int i=0; i<n; i++) res[--row][col]=++num;
            
            if(--n == 0 || num == n*n) break;
            
        }
        return res;
        
    }
};