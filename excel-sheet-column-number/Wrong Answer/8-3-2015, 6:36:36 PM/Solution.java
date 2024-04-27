// https://leetcode.com/problems/excel-sheet-column-number

public class Solution {
    public int titleToNumber(String s) {
        if(s == null || s.length() == 0){
             return 0;
         }
         int col =0;
         for(int i = 0; i<s.length();i++){
             col = col*i*26 + (s.charAt(i)-'A'+1);
         }
         return col;
         
    }
}