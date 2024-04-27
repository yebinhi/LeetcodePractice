// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int len=numbers.length;
        if(len<=1){
            return new int[]{};
        }
        
        for(int i=0; i<len; i++){
            int key=target-numbers[i];
            int index=bSearch(numbers, key, i+1);
            if(index != -1) {
                return new int[]{i+1, index+1};
            }
        }
        throw new IllegalArgumentException("No two sum solution");
    }
    
    private int bSearch(int[] A, int key, int start){
        int L=start, R=A.length-1;
        
        while(L<R){
            int M=(L+R)/2;
            if(A[M]<key){ 
                L=M+1;
            }else {
                R=M;
            }
        }
        return (L==R && A[L]==key)?L:-1;
    }
}