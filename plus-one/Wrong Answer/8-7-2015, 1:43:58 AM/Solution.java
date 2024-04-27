// https://leetcode.com/problems/plus-one

public class Solution {
    public int[] plusOne(int[] digits) {
        if(digits.length == 0){
            return digits;
        }
        int carry =0;
        int i = digits.length-1;
        
        
        do{
            if((digits[i]+1) >10){
                carry =1;
                digits[i] = (digits[i]+1)%10;
            }else{
                digits[i] = digits[i]+1;
            }
            i--;
            
        }while(i >= 0);
        int[] result;
        if(carry == 1){
             result = new int[digits.length+1];
             System.arraycopy(digits, 0, result, 1, digits.length);
             result[0]=1;
        }else{
            result = new int[digits.length];
            System.arraycopy(digits, 0, result, 0, digits.length);
        }
        return result;
    }
}