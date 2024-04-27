// https://leetcode.com/problems/number-of-islands

class Solution {
    public int numIslands(char[][] grid) {
        if(grid.length <=0) return 0;
        int counter=0;
        for(int i=0; i< grid.length; i++){
            for(int j=0; j<grid[0].length; j++){
                if(grid[i][j]=='1'){
                    counter++;
                    traves(grid, i, j);
                }
            }
        }
        return counter;
    }
    
    private void traves(char[][] grid, int row, int col){
        int nr=grid.length;
        int nc=grid[0].length;
        if(row<0||col<0||row>=nr||col>=nc||grid[row][col]=='0') return;
        grid[row][col]='0';
        traves(grid,  row+1,  col);
        traves(grid,  row-1,  col);
        traves(grid,  row,  col+1);
        traves(grid,  row,  col-1);
        
    }
}