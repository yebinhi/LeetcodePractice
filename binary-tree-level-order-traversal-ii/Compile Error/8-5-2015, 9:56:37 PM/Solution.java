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
        if(root == null){
            return new List<>();
        }
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        Stack<TreeNode> stack1 = new Stack<TreeNode>();
        Stack<TreeNode> stack2 = new Stack<TreeNode>();
        stack1.push(root);
        while(!stack1.isEmpty() || !stack2.isEmpty()){
            List<Integer> array = new ArrayList<Integer>();
            if(!stack1.isEmpty()){
                
                while(!stack1.isEmpty()){
                    TreeNode temp = stack1.pop();
                    array.add(temp.val);
                    if(temp.left != null){
                        stack2.push(temp.left);
                    }
                    if(temp.right != null){
                        stack2.push(temp.right);
                    }
                }
            }else if(!stack2.isEmpty()){
                
                while(!stack2.isEmpty()){
                    TreeNode temp = stack2.pop();
                    array.add(temp.val);
                    if(temp.left != null){
                        stack2.push(temp.left);
                    }
                    if(temp.right != null){
                        stack2.push(temp.right);
                    }
                }
            }
            result.add(array);
        }
        return result;
        
    }
}