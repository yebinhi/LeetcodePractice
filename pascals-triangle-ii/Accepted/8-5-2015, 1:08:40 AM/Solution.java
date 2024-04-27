// https://leetcode.com/problems/pascals-triangle-ii

public class Solution {
    public List<Integer> getRow(int rowIndex) {
        long[] arr = new long[rowIndex+1];
        arr[0] = 1;
        for (int i = 1; i < rowIndex+1; i++) {
            arr[i] = arr[i-1] *(rowIndex-i+1)/i;
        }
        List<Integer> result = new ArrayList<Integer>();
        for (long a : arr) {
            result.add((int) a);
        }
        return result;
    }
}