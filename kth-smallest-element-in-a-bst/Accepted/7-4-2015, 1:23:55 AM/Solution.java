// https://leetcode.com/problems/kth-smallest-element-in-a-bst

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
  int re = 0;
    int kk = 0;
    public int kthSmallest(TreeNode root, int k) {
        kk = k;
        helper(root);
        return re;
    }
    private void helper(TreeNode root){
        if(root==null) return;
        helper(root.left);
        if(--kk==0)
            re = root.val;
        helper(root.right);
    }
}