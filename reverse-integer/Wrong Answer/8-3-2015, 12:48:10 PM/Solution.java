// https://leetcode.com/problems/reverse-integer

public class Solution {
    public int reverse(int x) {
        if(x == 0){
            return 0;
        }
        if(x < 10 || x > -9){
            return x;
        }
        int temp = x;
        int result=0;
       while(x != 0){
           result = result*10 +x%10;
       }
       if(x<0){
           result*=-1;
       }
        return result;
    }
}