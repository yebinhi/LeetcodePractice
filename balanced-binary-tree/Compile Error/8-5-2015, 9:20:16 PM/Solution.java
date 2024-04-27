// https://leetcode.com/problems/balanced-binary-tree

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
    public boolean isBalanced(TreeNode root) {
        if(root == null){
            return true;
        }
        int heighDiff = maxDepth(root.left) - maxDepth(root.right);
        if(Math.abs(heighDiff) > 1){
            return false;
        }else{
            return isBalance(root.left) && isBalanced(root.right);
        }
    }
    
    public int maxDepth(TreeNode node){
        if(node == null){
            return 0;
        }
        return 1 + Math.max(maxDepth(node.left), maxDepth(node.right));
    }
   
}