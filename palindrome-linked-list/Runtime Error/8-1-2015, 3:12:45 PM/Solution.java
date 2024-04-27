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
        if(head == null || head.next == null){
            return true;
        }
        ListNode slow = head;
        ListNode fast = head;
        while(fast.next.next != null && slow.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode newHead = slow.next;
        ListNode node = slow.next;
        while(node != null){
            ListNode temp = new ListNode(node.val);
            temp.next = newHead;
            newHead = temp;
            node = node.next;
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