// https://leetcode.com/problems/excel-sheet-column-number

public class Solution {
    public int titleToNumber(String s) {
        if(s == null || s.length() == 0){
             return 0;
         }
         if(s.length()==1){
             return s.charAt(s.length()-1)-'A'+1;
         }
         return (s.length()-1)*26 + (s.charAt(s.length()-1)-'A'+1);
         
    }
}