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
        
    }
    
    public int maxDepth(TreeNode node){
        if(node == null){
            return 0;
        }
        return 1 + Math.max(maxDepth(node.left), maxDepth(node.right);
    }
    public int minDepth(TreeNode node){
        if(node == null){
            return 0;
        }
        if(node.left == null && node.right == null){
            return 1;
        }
        if(node.left != null && node.right == null){
            return 1+minDepth(root.left);
        }
        if(node.right != null && node.left == null){
            return 1+ minDepth(root.right);
        }
        
        return 1+ Math.min(minDepth(root.left), minDepth(root.right));
    }
}