// https://leetcode.com/problems/reverse-integer

public class Solution {
    public int reverse(int x) {
        int result=0;
       while(x != 0){
           result = result*10 +x%10;
           x=x/10;
       }
       
        return result;
    }
}