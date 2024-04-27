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
        if(head == null || head.next==null){
            return true;
        }
        ListNode fast = head;
        ListNode slow = head;
        while(fast.next != null && fast.next.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        ListNode middle = null;
        if(fast.next == null){
            middle = slow;
        }else{
            middle = slow.next;
        }
        ListNode secondHead = middle;
        ListNode node = middle;
        while(node.next != null){
            secondHead = node.next;
            secondHead.next = node;
            node = node.next;
        }
        while(secondHead != null){
            if(secondHead.val != head.val){
                return false;
            }
            secondHead = secondHead.next;
            head = head.next;
        }
        return true;
 
    }
}