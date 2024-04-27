// https://leetcode.com/problems/climbing-stairs

public class Solution {
    public int climbStairs(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        return climbStairs(n-1)+climbStairs(n-2);
    }
}