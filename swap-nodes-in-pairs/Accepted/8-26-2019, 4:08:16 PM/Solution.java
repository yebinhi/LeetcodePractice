// https://leetcode.com/problems/swap-nodes-in-pairs

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode current = head;
        ListNode prev = dummy;
        while(current != null && current.next != null){
            ListNode next = current.next, nextNext=current.next.next;
            prev.next=next;
            next.next=current;
            current.next=nextNext;
            prev = current;
            current = nextNext;
        }
        return dummy.next;
    }
}