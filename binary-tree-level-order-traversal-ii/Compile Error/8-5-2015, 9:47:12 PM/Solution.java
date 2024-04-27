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
        List<ArrayList<Integer>> result = new ArrayList<ArrayList<Integer>>();
        List<TreeNode> stack1 = new Stack<TreeNode>();
        List<TreeNode> stack2 = new Stack<TreeNode>();
        stack1.push(root);
        while(!stack1.isEmpty() || !stack2.isEmpty()){
            if(!stack1.isEmpty()){
                List<Integer> array = new ArrayList<Integer>();
                while(!stack1.isEmpty){
                    TreeNode temp = stack1.pop();
                    aray.add(temp.val);
                    if(temp.left != null){
                        stack2.push(temp.left);
                    }
                    if(temp.right != null){
                        stack2.push(temp.right);
                    }
                }
            }else if(!stack2.isEmpty()){
                List<Integer> array = new ArrayList<Integer>();
                while(!stack2.isEmpty){
                    TreeNode temp = stack2.pop();
                    aray.add(temp.val);
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
        
    }
}