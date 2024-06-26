// https://leetcode.com/problems/binary-search-tree-iterator

/**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

public class BSTIterator {
    
    Stack<TreeNode> stack = new Stack<TreeNode>();
    
    public BSTIterator(TreeNode root) {
        TreeNode Node = root;
        while(Node != null){
            stack.push(Node);
            Node = root.left;
        }
    }

    /** @return whether we have a next smallest number */
    public boolean hasNext() {
        return stack.isEmpty();
    }

    /** @return the next smallest number */
    public int next() {
        TreeNode p = stack.pop();
        TreeNode q = p.right;
        while(q != null){
            stack.push(q);
            q= q.left;
        }
        return p;
    }
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = new BSTIterator(root);
 * while (i.hasNext()) v[f()] = i.next();
 */