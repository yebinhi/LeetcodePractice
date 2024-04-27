// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
    public int myAtoi(String str) {
        str = str.trim();
        if(str == null || str.length()==0) return 0;
        int flag = 1, i = 0;
        if(str.charAt(i) == '-'){
            flag = -1;
            i++;
        }else if(str.charAt(i) == '+'){
            i++;
        }
        
        if(str.length() <= 0 || !Character.isDigit(str.charAt(i))) return 0;
        
        int digit=0;
        while(i< str.length()){
            if(digit >= Integer.MAX_VALUE/10){
                return flag == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            } 
            if(Character.isDigit(str.charAt(i))){
                digit = digit*10 + (str.charAt(i) - '0');
            }
               i++;
        }
               
       digit=digit*flag;
        return digit;
    }
}