// https://leetcode.com/problems/factorial-trailing-zeroes

public class Solution {
    public int trailingZeroes(int n) {
        if(n<0){
            return -1;
        }
        for(long i=5; n/i>=1; i*=5){
            count+=n/i;
        }
        return count;
    }
}