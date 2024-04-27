// https://leetcode.com/problems/palindrome-number

public class Solution {
    public boolean isPalindrome(int x) {
         if (x<0){
            return false;
        }
        int div =1;
        int length =1;
        while(x/div>=10){
            div*=10;
            length++;
        }

        for (int i=0;i<length/2 ;i++){
            if (x%10 != x/div %10){
                return false;
            }
            x /= 10;
            div /= 100;
        }
        return true;
    }
}