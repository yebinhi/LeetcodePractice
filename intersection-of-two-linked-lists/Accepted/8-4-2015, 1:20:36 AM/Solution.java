// https://leetcode.com/problems/intersection-of-two-linked-lists

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if( null==headA || null==headB )
            return null;

       ListNode cuA =headA;
       ListNode cuB = headB;
       while(cuA != cuB){
           cuA = cuA == null ? headB : cuA.next;
           cuB = cuB == null ? headA : cuB.next;
       }
       return cuA;
    }
}