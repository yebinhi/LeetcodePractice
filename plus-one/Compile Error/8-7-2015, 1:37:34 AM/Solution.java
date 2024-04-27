// https://leetcode.com/problems/plus-one

public class Solution {
    public int[] plusOne(int[] digits) {
        if(digits.length == 0){
            return digits;
        }
        int carry =0;
        int i = digits.length-1;
        int j = digits.length;
        int[] result new int[digits.length+1];
        do{
            if((digits[i]+1) >10){
                carry =1;
                result[j] = (digits[i]+1)%10;
            }else{
                result[j] = digits[i]+1;
            }
            j--;
            i--;
            
        }while(i >= 0 || carry == 1);
        return result;
    }
}