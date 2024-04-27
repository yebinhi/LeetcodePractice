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
    int count=0;
public int kthSmallest(TreeNode root, int k) {
	
	
	    
	kthSmallest(root.left, k);
	count++;
	if(count==k) return root.val;
	
	kthSmallest(root.right, k);
	count++;
	if(count==k) return root.val;
	
	
	return -1;
 }
}