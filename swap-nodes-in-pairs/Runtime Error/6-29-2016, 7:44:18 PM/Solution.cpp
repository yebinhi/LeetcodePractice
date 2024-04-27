// https://leetcode.com/problems/swap-nodes-in-pairs

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        
        ListNode* newhead = new ListNode(0), *thenewhead=newhead;
        newhead->next=head;
        while(!head->next->next){
            ListNode* node=head->next;
            newhead->next=node;
            head->next=node->next;
            node->next=head;
            head=head->next;
            newhead=newhead->next->next;
        }
        return thenewhead->next;
    }
};