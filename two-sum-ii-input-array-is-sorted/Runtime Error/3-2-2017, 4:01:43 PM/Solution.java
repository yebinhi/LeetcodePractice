// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        
        for(int i=0; i<numbers.length; i++){
            int key=target-numbers[i];
            int temp=bsearch(numbers, key, i+1);
            if(temp != -1){
                return new int[]{i+1, temp+1};
            }
            
        }
        throw new IllegalArgumentException("No two sum solution");
    }
    
    private int bsearch(int[] A, int key, int start){
        int L=start; int R=A.length;
        while(L<R){
            int M=(L+R)/2;
            if(A[M]<key){
                L=M+1;
            }else{
                R=M;
            }
        }
        return (L==R && A[L]==key) ? L:-1;
    }
}