// https://leetcode.com/problems/merge-k-sorted-lists

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        if(lists == null || lists.length<=0) return null;
        
        PriorityQueue<ListNode> pq = new PriorityQueue<>((a, b) -> a.val-b.val);
        
        for(ListNode node : lists){
            if(node != null){
                pq.offer(node);
            }
        }
        
        ListNode parent = new ListNode();
        ListNode current = parent;
        
        while(!pq.isEmpty()){
            ListNode temp = pq.poll();
            current.next = temp;
            current = current.next;
            if(temp.next != null){
                pq.offer(temp.next);
            }
        }
        return parent.next;
    }
}