// https://leetcode.com/problems/reverse-integer

public class Solution {
    public int reverse(int x) {
        try{
            int rev = 0;
            while(x != 0){
                rev = rev*10 + x%10;
                x = x/10;
            }
            return rev;
        }catch(InputMismatchException exception){
            System.out.println("This is not an integer");
        }
 
        
    }
}