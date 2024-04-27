// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
    public int myAtoi(String str) {
        int i=0, n=str.length();
        while(i<n && str.charAt(i)== ' ') i++;
        
        int sign=1;
        if(i<n && str.charAt(i) == '+'){
            i++;
        }else if(i<n && str.charAt(i) == '-'){
            sign = -1;
            i++;
        }
        int num=0;
        while(i<n && Character.isDigit(str.charAt(i))){
            int digit = Character.getNumericValue(str.charAt(i));
            if(num > Integer.MAX_VALUE/10 || num == Integer.MAX_VALUE/10 && digit >= 8){
                return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }
            num = num*10+digit;
            i++;
        }
        
        num = num* sign;
        
        return num;
    }
}