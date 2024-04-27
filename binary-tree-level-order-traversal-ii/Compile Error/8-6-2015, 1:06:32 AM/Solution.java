// https://leetcode.com/problems/binary-tree-level-order-traversal-ii

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
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        if(root == null){
            return result;
        }
        
        LinkedList<TreeNode> current = new LinkedList<TreeNode>();
        LinkedList<TreeNode> next = new LinkedList<TreeNode>();
        List<Integer> numbers = new ArrayList<Integer>();
        current.offer(root);
        while(!current.isEmpty()){
            TreeNode node = current.poll();
            numbers.add(node.val);
            if(node.left != null){
                next.offer(node.left);
            }
            if(node.right != null){
                next.offer(node.right);
            }
            if(current.isEmpty()){
                current = next;
                number = new ArrayList<Integer>();
                next = new LinkedList<TreeNode>();
            }
        }
        List<List<Integer>> reverseResult = new ArrayList<List<Integer>>();
        for(int i =0; i<result.size(); i++){
            reverseResult.add(result.get(i));
        }
        return reverseResult;
    }
}