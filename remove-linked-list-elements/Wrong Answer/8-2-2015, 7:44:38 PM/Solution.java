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
        ListNode current = head;
        ListNode pre = head;
        while(current != null){
            if(current.val == val){
                if(current == head){
                    head = current.next;
                    
                }else{
                    pre.next = current.next;
                }
                pre = current;
            }
            current = current.next;
        }
        return head;
    }
}