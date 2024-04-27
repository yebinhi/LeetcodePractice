// https://leetcode.com/problems/palindrome-linked-list

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public boolean isPalindrome(ListNode head) {
        if(head == null){
            return true;
        }
        ListNode slow = head;
        ListNode fast = head;
        while(fast != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode newHead = slow;
        while(slow != null){
            ListNode node = new ListNode(slow.val);
            node.next = newHead;
            newHead = node;
            slow = slow.next;
        }
        while(newHead != null){
            if(newHead.val != head.val){
                return false;
            }
            head = head.next;
            newHead = newHead.next;
        }
        return true;
    }
}