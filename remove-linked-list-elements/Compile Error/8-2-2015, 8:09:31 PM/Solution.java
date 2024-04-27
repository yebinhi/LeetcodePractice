// https://leetcode.com/problems/remove-linked-list-elements

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode removeElements(ListNode head, int val) {
        if(head == null){
            return null;
        }
        ListNode prev = head;
        while(prev != null){
            if(prev.val == val){
                if(prev == head){
                    head = prev.next;
                }
                prev = prev.next;
            }
            prev == prev.next;
        }
        return head;
    }
}