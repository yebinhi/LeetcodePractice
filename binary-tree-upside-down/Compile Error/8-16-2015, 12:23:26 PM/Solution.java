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
        if(root.left == null && root.right == null){
            return root;
        }
        
        TreeNode node1 = upsideDownBinary(root.left);
        if(node1 == null){
            newRoot = root;
        }
        TreeNode temp = root.left;
        root.left = root;
        root.right = left;
        root = root.left;
        
        TreeNode node2 = upsideDownBinary(root.right);
        
    }
}