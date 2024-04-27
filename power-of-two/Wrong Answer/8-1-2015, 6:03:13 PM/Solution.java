// https://leetcode.com/problems/power-of-two

public class Solution {
    public boolean isPowerOfTwo(int n) {
        return (n & (n-1)) == 0;
    }
}