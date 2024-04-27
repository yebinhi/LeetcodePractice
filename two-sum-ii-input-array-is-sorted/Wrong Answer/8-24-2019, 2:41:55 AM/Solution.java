// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

class Solution {
    public int[] twoSum(int[] numbers, int target) {
        for(int i=0; i<numbers.length; i++){
            int x = numbers[i];
            int result = bSearch(numbers, target-x, i+1);
            if(result != -1){
                return new int[]{i+1, result+1};
            }
        }
        return new int[]{};
    }
    
    private int bSearch(int[] numbers, int key, int left){
        int L=left, R=numbers.length-1;
        while(L<R){
            int M = (L+R)/2;
            if(numbers[M] > key){
                R=M;
            }else{
                return L=M+1;
            }
        }
        return (L == R && numbers[L] == key) ? L : -1;
    }
}