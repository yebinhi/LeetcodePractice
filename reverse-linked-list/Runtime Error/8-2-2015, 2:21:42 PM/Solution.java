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
        ListNode current = head;
        while(current.next != null){
            head = current.next;
            current=current.next;
            head.next = current;
        }
        return head;
    }
}