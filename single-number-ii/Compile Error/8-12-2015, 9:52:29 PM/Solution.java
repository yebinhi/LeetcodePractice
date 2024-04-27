// https://leetcode.com/problems/single-number-ii

public class Solution {
    public int singleNumber(int[] nums) {
        int n = nums.length;
        int[] count = new int[32];
int result = 0;
for (int i = 0; i < 32; i++) {
for (int j = 0; j < n; j++) {
if ((A[j] >> i) & 1) {
count[i]++;
}
}
result |= ((count[i] % 3) << i);
}
return result;
    }
}