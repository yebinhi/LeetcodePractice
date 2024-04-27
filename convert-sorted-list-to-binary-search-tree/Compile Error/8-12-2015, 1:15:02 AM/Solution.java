// https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
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
    private ListNode list;
    public TreeNode sortedListToBST(ListNode head) {
        if(head == null){
            return null;
        }
        int n = 0;
        ListNode p = head;
        while(p != null){
            p=p.next;
            n++;
        }
        list = head;
        return sortedListToBST(head, 0, n-1);
    }
    private TreeNode sortedListBST(int start, int end){
        if(start > end){
            return null;
        }
        int mid = (start+end)/2;
        TreeNode leftChild = sortedListBST(start, mid-1);
        TreeNode parent = new TreeNode(list.val);
        parent.left = leftChild;
        list = list.next;
        parent.right = sortedListBST(mid+1, end);
        return parent;
    }
}