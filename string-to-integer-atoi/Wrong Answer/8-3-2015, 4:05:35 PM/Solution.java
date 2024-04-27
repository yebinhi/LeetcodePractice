// https://leetcode.com/problems/string-to-integer-atoi

public class Solution {
    public int myAtoi(String str) {
        if(str == null || str.length() == 0){
            return 0;
        }
        int total=0;
        int index=0, sign=1;
        int len = str.length();
        //remove spaces
        while(str.charAt(index) == ' ' && index < len){
            index++;
        }
        //check sign
        if(str.charAt(index) == '+' || str.charAt(index) == '-'){
            sign = str.charAt(index) == '+' ? 1 : -1;
            index++;
        }
        while(index < len){
            int digit = str.charAt(index)-'0';
            if(str.charAt(index) <'0' && str.charAt(index) > '9'){
               break;
           }
         
            if(total > Integer.MAX_VALUE/10 || total < Integer.MIN_VALUE/10){
                return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }
            total = total*10 + digit;
            index++;
        }
        return total*sign;
    }
}