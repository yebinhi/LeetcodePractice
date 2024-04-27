// https://leetcode.com/problems/reverse-linked-list

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode reverseList(ListNode head) {
        if(head == null && head.next == null){
            return head;
        }
        ListNode secon = head.next;
        head.next =null;
        ListNode rest = reverseList(secon);
        secon.next = head;
        return rest;
    }
}