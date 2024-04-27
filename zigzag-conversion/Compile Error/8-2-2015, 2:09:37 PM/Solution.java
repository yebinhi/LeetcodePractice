// https://leetcode.com/problems/zigzag-conversion

public class Solution {
    public String convert(String s, int numRows) {
        int len = s.length();
        if(numRows == 1 || len < numRows){
            return s;
        }
        StringBuilder result = new StringBuilder();
        int n = numRows+numsRow-2;
        for(int i =0; i < numRows; i++){
            int index = i;
            while(index < len){
                result.append(s.charAt(index));
                index+=n;
                if(i>0 && i<(numRow-1) && (index-i-i)<len){
                    result.append(S.charAt(index-i-i));
                }
            }
        }
        return result;
    }
}