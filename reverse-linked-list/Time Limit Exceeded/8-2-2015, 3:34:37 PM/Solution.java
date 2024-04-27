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
        if(head == null || head.next == null){
            return head;
        }
        ListNode p1 = head;
        ListNode p2 = head.next;
        head.next =null;
        while(p1 != null && p2 != null){
            ListNode t = p2.next;
            p2.next = p1;
            p1 = p2;
            while(t != null){
                p2 = t;
            }
        }
        return p2;
    }
}