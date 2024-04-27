// https://leetcode.com/problems/binary-tree-upside-down

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
    TreeNode newRoot =null;
    public TreeNode upsideDownBinaryTree(TreeNode root) {
        if(root == null || (root.left == null && root.right == null)){
            return root;
        }
        
        TreeNode node1 = upsideDownBinaryTree(root.left);
        node1.left.left = root.right;
        node1.right.right = root;
        root .left = null;
        root.right = null;
        return node1;
        
    }
}