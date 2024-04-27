// https://leetcode.com/problems/happy-number

public class Solution {
    public boolean isHappy(int n) {
        if(n < 0){
            return false;
        }
        int i = 1000;
        while(i>0){
            i--;
            int s =sum(splitN(n));
            if(s == 1){
                return true;
            }
        }
        return false;
    }
    public int sum(int[] digits){
        for(int i=0; i<digits.length; i++){
            sum = sum + digits[i]*digits[i];
        }
        return sum;
    }
    public int[] splitN(int n){
        int count=1;
        int nc = n;
        while(nc/10>10){
            nc/=10;
            count++;
        }
        int[count] digits;
        while(n%10 >0){
            digits[count]=n%10;
            n=n/10;
            count--;
        }
        return digits;
    }
}