// https://leetcode.com/problems/sum-of-digits-in-the-minimum-number

class Solution {
    public int sumOfDigits(int[] A) {
        Arrays.sort(A);
        int minimal = A[0];
        int len = (int)Math.log10(minimal)+1, sum=0;
        for(int i=0; i<len; i++){
            sum = sum + minimal%10;
            minimal=minimal/10;
        }
        return sum%2 == 0 ? 1:0;
    }
}