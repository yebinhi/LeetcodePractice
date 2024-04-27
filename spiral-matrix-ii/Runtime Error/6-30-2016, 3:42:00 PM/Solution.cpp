// https://leetcode.com/problems/spiral-matrix-ii

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        if(n == 0) return res;
        int r=n+1, c=n+1, row=0, col=-1, num=0;
        while(true){
            for(int i=0; i<c; i++) res[row][++col]=++num;
            if(--r == 0) break;
            
            for(int i=0; i<r; i++) res[++row][col]=++num;
            if(--c == 0) break;
            
            for(int i=0; i<c; i++) res[row][--col]=++num;
            if(--r == 0) break;
            
            for(int i=0; i<r; i++) res[--row][col]=++num;
            if(--c == 0) break;
        }
        return res;
    }
};