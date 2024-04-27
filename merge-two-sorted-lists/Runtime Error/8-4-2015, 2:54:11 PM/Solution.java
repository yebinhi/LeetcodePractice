// https://leetcode.com/problems/merge-two-sorted-lists

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1 == null && l2 == null){
            return null;
        }
        if(l1 == null && l2 != null){
            return l2;
        }
        if(l2 == null && l1 != null){
            return l1;
        }
        ListNode head = l1.val <= l2.val ? l1 : l2;
        ListNode newNode = new ListNode(Integer.MIN_VALUE);
        while(l1.next != null || l2.next != null){
            if(l1.val <= l2.val){
                newNode.next = l1;
                l1 = l1.next;
            }else if (l1.val > l2.val){
                newNode.next = l2;
                l2 = l2.next;
            }
        }
        return head;
    }
}