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
            if(str.charAt(index) >'0' && str.charAt(index) < '9'){
                int digit = str.charAt(index)-'0';
            }else{
                break;
            }
            if(total > Integer.MAX_VALUE || total < Integer.MIN_VALUE){
                return total = sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }
            total = total*10 + digit;
        }
        return (int)total*sign;
    }
}