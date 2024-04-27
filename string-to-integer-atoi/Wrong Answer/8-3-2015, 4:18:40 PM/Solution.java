// https://leetcode.com/problems/string-to-integer-atoi

public class Solution {
    public int myAtoi(String str) {
        if(str == null || str.length() == 0){
            return 0;
        }
        long total=0;
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
            if(digit < 0 || digit > 9){
               break;
           }
            total = total*10 + digit;
            if(total >= Integer.MAX_VALUE){
                return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }
            
            index++;
        }
        return (int)total*sign;
    }
}