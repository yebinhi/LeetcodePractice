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
    
  private List<TreeNode> list;

public BSTIterator(TreeNode root) {
    list = new ArrayList<TreeNode>();
    TreeNode p = root;
    while(p!= null){
        list.add(p);
        p = p.left;
    }
}

/** @return whether we have a next smallest number */
public boolean hasNext() {
    return !list.isEmpty();
}

/** @return the next smallest number */
public int next() {
    TreeNode p = list.remove(list.size()-1);
    TreeNode q = p.right;
    while(q != null){
        list.add(q);
        q = q.left;
    }
    return p.val;
}
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = new BSTIterator(root);
 * while (i.hasNext()) v[f()] = i.next();
 */