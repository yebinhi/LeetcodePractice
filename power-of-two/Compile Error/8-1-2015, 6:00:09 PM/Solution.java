// https://leetcode.com/problems/power-of-two

public class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n^(n-1)==0){
            return true;
        }
        return false;
    }
}