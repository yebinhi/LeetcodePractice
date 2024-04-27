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
        LinkedList fast = head;
        LinkedList slow = head;
        while(fast.next != null && fast.next.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        LinkedList middle = null;
        if(fast.next == null){
            middle = slow;
        }else{
            middle = slow.next;
        }
        LinkedList secondHead = middle;
        LinkedList node = middle;
        while(node != null){
            secondHead = node.next;
            secondhead.next = node;
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