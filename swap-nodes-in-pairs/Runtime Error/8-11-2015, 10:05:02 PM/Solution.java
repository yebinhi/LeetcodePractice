// https://leetcode.com/problems/swap-nodes-in-pairs

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode p = head;
        ListNode prev = dummy;
        while(p.next != null || p.next.next != null){
            ListNode q = p.next, r = p.next.next;
            prev.next = q;
            q.next = p;
            p.next = r;
            prev = p;
            p = r;
        }
        return dummy.next;
    }
}