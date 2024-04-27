// https://leetcode.com/problems/sum-root-to-leaf-numbers

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public int sumNumbers(TreeNode root) {
        
        return helper(root, 0);
        
    }
    int total=0;
    private int helper(TreeNode root, int num){
        if(root == null) return 0;
        num = num*10 + root.val;
        helper(root.left, num);
        if(root.left == null && root.right == null){
            total=total+num;
        }
        helper(root.right, num);
        return total;
        
    }
}