// https://leetcode.com/problems/binary-tree-level-order-traversal

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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        if(root == null){
            return result;
        }
        
        LinkedList<TreeNode> current = new LinkedList<TreeNode>();
        LinkedList<TreeNode> next = new LinkedList<TreeNode>();
        List<Integer> numbersL = new ArrayList<Integer>();
        current.offer(root);
        while(!current.isEmpty()){
            TreeNode node = current.poll();
            numbersL.add(node.val);
            if(node.left != null){
                next.offer(node.left);
            }
            if(node.right != null){
                next.offer(node.right);
            }
            if(current.isEmpty()){
                current = next;
                result.add(numbersL);
                numbersL = new ArrayList<Integer>();
                next = new LinkedList<TreeNode>();
            }
        }
        return result;
    }
}