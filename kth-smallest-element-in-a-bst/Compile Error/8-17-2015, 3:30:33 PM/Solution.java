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
    public int number =0;
    public int k =0;
    public int kthSmallest(TreeNode root, int k) {
        this.k = k;
        helper(root, k);
        return number;
    }
    private void helper(TreeNode root){
        if(root == null){
            return;
        }
        helper(root.left);
        k--;
        if(k == 0){
          number = root.val;
          return;
        } 
        helper(root.right);
    }
}