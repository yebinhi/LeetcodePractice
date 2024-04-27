// https://leetcode.com/problems/minimum-depth-of-binary-tree

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
    public int minDepth(TreeNode root) {
        if(root ==null){
       return 0;
   }
   if(root.left ==null&&root.right == null){
       return 1;
   }
   if(root.left ==null){
       return 1+minDepth(root.right);
   }
   if(root.right ==null){
       return 1+minDepth(root.left);
   }
   int left = 1+minDepth(root.left);
   int right =1+ minDepth(root.right);
   return left<right?left:right;
    }
}