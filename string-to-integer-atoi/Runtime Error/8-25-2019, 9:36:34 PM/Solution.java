// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
    public int myAtoi(String str) {
        
        if(str == null || str.length()==0) return 0;
        
        str = str.trim();
    
        int flag = 1, i = 0;
        if(str.charAt(i) == '-'){
            flag = -1;
            i++;
        }else if(str.charAt(i) == '+'){
            i++;
        }
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