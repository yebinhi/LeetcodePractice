// https://leetcode.com/problems/remove-duplicates-from-sorted-list

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null){
            return head;
        }
        ListNode current = head;
        while(current.next != null){
            if(current.val == current.next.val){
                current.next = current.next;
            }
            current = current.next;
        }
        return head;
    }
}