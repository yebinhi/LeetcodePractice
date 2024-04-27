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
    int sum=0;
    public int sumNumbers(TreeNode root) {
        helper(root, "", 0);
        return sum;
    }
    
    private void helper(TreeNode root, String path, int sum){
        if(root == null){
            return;
        }
        if(root.left == null && root.right == null){
            path+=root.val;
            sum += Integer.parseInt(path);
        }
        helper(root.left, path+root.val, sum);
        helper(root.right, path+root.val, sum);
        path=path.remove(path.length()-1);
    }
}