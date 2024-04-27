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
        if(root == null) return 0;
        return helper(root, "0");
    }
    
    private int helper(TreeNode root, String path){
        if(root.left == null && root.right == null){
            return Integer.valueOf(path + root.val);
        }
        if(root.left != null){
            return helper(root.left, path+root.val);
        }
        if(root.right != null){
            return helper(root.right, path+root.val);
        }
       return 0;
    }
}