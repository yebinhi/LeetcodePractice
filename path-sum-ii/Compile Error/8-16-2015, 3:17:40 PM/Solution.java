// https://leetcode.com/problems/path-sum-ii

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
    public List<List<Integer>> pathSum(TreeNode root, int sum) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        if(root != null) helper(root, sum, result, new ArrayList<Integer>());
        return result;
    }
    
    private void helper(TreeNode root, int sum, List<List<Integer>> result, List<Integer> path){
        if(root.left == null && root.right == null && (sum-root.val) == 0){
            List<Integer> copy = new ArrayList<Integer>(path);
            result.add(copy.add[root.val]);
        }
        helper(root.left, sum-root.val, result, path.add[root.val]);
        helper(root.right, sum-root.val, result, path.add[root.val]);
        path.remove(path.size()-1);
    }
}