// https://leetcode.com/problems/find-anagram-mappings

class Solution {
    public int[] anagramMappings(int[] A, int[] B) {
        int[] re= new int[A.length];
        for(int i=0; i<A.length; i++){
            int x = A[i];
            for(int j=0; j<B.length; j++){
                if(x == B[j]){
                    re[i]=j;
                }
            }
        }
        return re;
    }
}