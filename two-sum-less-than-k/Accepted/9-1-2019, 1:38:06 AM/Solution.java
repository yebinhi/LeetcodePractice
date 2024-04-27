// https://leetcode.com/problems/two-sum-less-than-k

class Solution {
    public int twoSumLessThanK(int[] A, int K) {
        int res=-1;
        for(int i=0; i<A.length; i++){
            for(int j=i+1; j<A.length; j++){
                int tempSum = A[i]+A[j];
                if(tempSum<K){
                    res = tempSum<res? res:tempSum;
                }
            }
        }
        return res;
    }
}