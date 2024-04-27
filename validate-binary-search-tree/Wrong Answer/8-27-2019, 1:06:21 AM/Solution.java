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
class Solution {
    public boolean isValidBST(TreeNode root) {
        return valid(root,Integer.MAX_VALUE, Integer.MIN_VALUE);
    }
    
    private boolean valid(TreeNode node, Integer max, Integer min){
        if(node==null) return true;
        boolean left = valid(node.left, node.val, min);
        boolean right = valid(node.right, max, node.val);
        
        return node.val < max && node.val > min && left && right;
    }
}