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
  int count=1;
public int kthSmallest(TreeNode root, int k) {
	
	if(root!=null) return -1;
	kthSmallest(root.left, k);
	if(count==k) return root.val;
	count++;
	kthSmallest(root.right, k);
	return -1;
	
	
	
	
    
    
}
}