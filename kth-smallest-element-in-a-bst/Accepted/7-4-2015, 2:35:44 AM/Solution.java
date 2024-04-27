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
int value=0;
public int kthSmallest(TreeNode root, int k) {
	
	if(root==null) return -1;
	count=k;
	inOrderTravel(root);
	return value;
 
}



public void inOrderTravel(TreeNode current){
	
	if(current==null) return;
	inOrderTravel(current.left);
	if(--count==0)  value=current.val;
	inOrderTravel(current.right);
	
}
}