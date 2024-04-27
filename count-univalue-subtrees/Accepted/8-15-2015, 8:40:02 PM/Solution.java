// https://leetcode.com/problems/count-univalue-subtrees

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
    int count = 0;
    public int countUnivalSubtrees(TreeNode root) {
       helper(root, 0);
       return count;
    }
    private boolean helper(TreeNode root, int val){
        if(root == null){
            return true;
        }
        if(!helper(root.left, root.val) | !helper(root.right, root.val)){
            return false;
        }
        count++;
        return root.val == val;
    }
}