// https://leetcode.com/problems/sort-list

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode sortList(ListNode head) {
        
        if(head == null || head.next == null){
            return head;
        }
        ListNode fast = head;
        ListNode slow = head;
        ListNode left = head;
        while(fast.next.next != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        ListNode right = slow.next;
        
        ListNode first = null, second = null;
        if(left != right){
            first = sortList(left);
            second = sortList(right);
        }
        return merge(first, second);
    }
    
    private ListNode merge(ListNode first, ListNode second){
        if(first == null){
            return second;
        }
        if(second == null){
            return first;
        }
        ListNode fake = new ListNode(-1);
        ListNode p = fake;
        while(first != null && second !=null){
            if(first.val < second.val){
                p.next = first;
                first = first.next;
                p = p.next;
            }else if(first.val == second.val){
                p.next = first;
                p.next.next = second;
                first = first.next;
                second = second.next;
                p=p.next.next;
            }else{
                p.next = second;
                second = second.next;
                p=p.next;
            }
        }
        if(first != null){
            p.next = first;
        }
        if(second != null){
            p.next = second;
        }
        return fake.next;
    }
}