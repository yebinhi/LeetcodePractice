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
    public ArrayList<ArrayList<Integer>> levelOrderBottom(TreeNode root) {
        ArrayList<ArrayList<Integer>> result = new  ArrayList<ArrayList<Integer>>();
 
    if(root == null){
        return result;
    }
 
    LinkedList<TreeNode> current = new LinkedList<TreeNode>();
    LinkedList<TreeNode> next = new LinkedList<TreeNode>();
    current.offer(root);
 
    ArrayList<Integer> numberList = new ArrayList<Integer>();
 
    // need to track when each level starts
    while(!current.isEmpty()){
        TreeNode head = current.poll();
 
        numberList.add(head.val);
 
        if(head.left != null){
            next.offer(head.left);
        }
        if(head.right!= null){
            next.offer(head.right);
        }
 
        if(current.isEmpty()){
            current = next;
            next = new LinkedList<TreeNode>();
            result.add(numberList);
            numberList = new ArrayList<Integer>();
        }
    }
 
    //return Collections.reverse(result);
    ArrayList<ArrayList<Integer>> reversedResult = new  ArrayList<ArrayList<Integer>>();
    for(int i=result.size()-1; i>=0; i--){
        reversedResult.add(result.get(i));
    }
 
    return reversedResult;
    }
}