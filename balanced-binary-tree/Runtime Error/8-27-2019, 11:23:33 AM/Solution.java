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
class Solution {
    public boolean isBalanced(TreeNode root) {
        int l = getDepth(root.left);
        int r = getDepth(root.right);
        
        return Math.abs(l-r) < 2;
        
    }
    
    private int getDepth(TreeNode node){
        if(node == null) return 0;
        int l = getDepth(node.left);
        int r = getDepth(node.right);
        return Math.max(l, r)+1;
    }
}