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
        if(lists == null) return null;
        
        PriorityQueue<ListNode> pq = new PriorityQueue<>((a, b) -> a.val-b.val);
        ListNode parent = new ListNode();
        ListNode current = parent;
        for(ListNode node : lists){
            pq.add(node);
            ListNode cur = null;
            if(node.next != null){
               cur = node.next;
            }
            
            while(cur != null){
                pq.add(cur);
                cur = cur.next;
            }
        }
        
        while(!pq.isEmpty()){
            ListNode temp = pq.poll();
            current.next = temp;
            current = temp;
        }
        return parent.next;
    }
}