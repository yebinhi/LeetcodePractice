// https://leetcode.com/problems/spiral-matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m=matrix.size();
        if(m<=0) return res;
        int n=matrix[0].size();
        if(n<=0) return res;
        
        int row=0, col=-1;
        while(true){
            for(int i=0; i<n; i++) res.push_back(matrix[row][++col]);
            if(--m==0) break;
            for(int i=0; i<m; i++) res.push_back(matrix[++row][col]);
            if(--n==0) break;
            for(int i=0; i<n; i++) res.push_back(matrix[row][--col]);
            if(--m ==0) break;
            for(int i=0; i<m; i++) res.push_back(matrix[--row][col]);
            if(--n==0) break;
        }
        return res;
    }
};