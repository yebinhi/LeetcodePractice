// https://leetcode.com/problems/verify-preorder-sequence-in-binary-search-tree

public class Solution {
    public boolean verifyPreorder(int[] preorder) {
        if(preoder.length == 0){
            return 0;
        }
        Stack<Integer> stack = new Stack<Integer>();
        int low = Integer.MIN_VALUE;
        for(int i =0; i<preoder.length; i++){
            int p = preoder[i];
            if(p<low){
                return false;
            }
            while(!stack.isEmpty && p>stack.peek()){
                low = path.pop();
            }
            push(p);
        }
    }
}