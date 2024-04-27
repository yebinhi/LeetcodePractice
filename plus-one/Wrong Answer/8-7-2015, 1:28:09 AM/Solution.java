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
            
        }while(carry >0);
        return digits;
    }
}