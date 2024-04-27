// https://leetcode.com/problems/validate-binary-search-tree

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
    public boolean isValidBST(TreeNode root) {
       
        return valid(root, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }
    public boolean valid(TreeNode node, int low, int high){
        if(node == null){
            return true;
        }
        return node.val < high && node.val > low && valid(node.left,low, node.val) && valid(node.right, node.val, high);
    }
}