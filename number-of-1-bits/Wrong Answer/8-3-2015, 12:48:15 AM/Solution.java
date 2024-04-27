// https://leetcode.com/problems/number-of-1-bits

public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int count=0;
        for(int i =0; i<32; i++){
            if((n&(1<<i)) > 0){
                count++;
            }
        }
        return count;
    }
}