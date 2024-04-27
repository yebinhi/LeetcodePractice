// https://leetcode.com/problems/remove-nth-node-from-end-of-list

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head == null || n ==0){
            return head;
        }
        int len =0;
        ListNode current = head;
        while(current != null){
            len++;
            current = current.next;
        }
        int startFrom = len -n;
        if(startFrom+1 == 1){
            head = head.next;
            return head;
        }
        current = head;
        for(int i =0; i<=startFrom; i++){
            current = current.next;
        }
        current.next = current.next.next;
        return head;
    }
}