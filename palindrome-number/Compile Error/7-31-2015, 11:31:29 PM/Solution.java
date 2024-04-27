// https://leetcode.com/problems/palindrome-number

public class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int div =1;
        while(x/div > 10){
            div*=10;
        }
        while(x != 0){
            int right = x % 10;
            int left = x / 10;
            if(right != left){
                return false;
            }
            x/=10;
        }
    }
}