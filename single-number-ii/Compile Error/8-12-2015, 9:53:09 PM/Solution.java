// https://leetcode.com/problems/single-number-ii

public class Solution {
    public int singleNumber(int[] nums) {
       int ones = 0, twos = 0, threes = 0;
for (int i = 0; i < n; i++) {
twos |= ones & A[i];
ones ^= A[i];
threes = ones & twos;
ones &= ~threes;
twos &= ~threes;
}
return ones;
    }
}