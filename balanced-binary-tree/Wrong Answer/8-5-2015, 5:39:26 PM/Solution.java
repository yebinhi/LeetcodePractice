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
        if(Math.abs(maxDepth(root.left) - minDepth(root.right)) > 1){
            return false;
        }
        return true;
    }
    
    public int maxDepth(TreeNode node){
        if(node == null){
            return 0;
        }
        return 1 + Math.max(maxDepth(node.left), maxDepth(node.right));
    }
    public int minDepth(TreeNode node){
        if(node == null){
            return 0;
        }
        if(node.left == null && node.right == null){
            return 1;
        }
        if(node.left != null && node.right == null){
            return 1+minDepth(node.left);
        }
        if(node.right != null && node.left == null){
            return 1+ minDepth(node.right);
        }
        
        return 1+ Math.min(minDepth(node.left), minDepth(node.right));
    }
}