// https://leetcode.com/problems/reverse-integer

public class Solution {
    public int reverse(int x) {
        
            int rev = 0;
            while(x != 0){
                rev = rev*10 + x%10;
                x = x/10;
            }
            
        if(reverse > Integer.MAX_VALUE || reverse < Integer.MIN_VALUE) {
            return 0;
        }
 
        return rev;
    }
}