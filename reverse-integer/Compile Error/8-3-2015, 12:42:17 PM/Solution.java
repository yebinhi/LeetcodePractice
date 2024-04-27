// https://leetcode.com/problems/reverse-integer

public class Solution {
    public int reverse(int x) {
        if(x == 0){
            return 0;
        }
        if(x < 10 || x > -9){
            return x
        }
        int temp = x;
        int div = 1;
        if(x != 0 ){
          div*=10;
          x/=10;
        }
        int result = 0;
        while(div !=0){
            result = x%10*div;
            x=x/10;
            div =div/10;
        }
        if(temp<0){
            result=result*(-1);
        }
        return result;
    }
}