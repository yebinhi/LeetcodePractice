// https://leetcode.com/problems/add-two-numbers

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        ListNode dummyHead = new ListNode(0);
        ListNode p = dummyHead;
        int carry =0;
        while(l1 != null || l2 != null){
            int x=0, y=0, digit=0;
            if(l1 != null){
                x=l1.val;
                l1=l1.next;
            }
            if(l2 != null){
                y=l2.val;
                l2=l2.next;
            }
            digit = x+y+carry;
            carry = digit/10;
            int newDigit = digit%10;
            p.next = new ListNode(newDigit);
            p=p.next;
        }
        return dummyHead.next;
    }
}