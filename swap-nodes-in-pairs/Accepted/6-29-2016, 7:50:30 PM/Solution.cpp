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
        ListNode* dummy= new ListNode(0), *p=head, *prev=dummy;
        dummy->next=head;
        while(p && p->next){
            ListNode *q=p->next, *r=p->next->next;
            prev->next=q;
            q->next=p;
            p->next=r;
            prev=p;
            p=r;
        }
        return dummy->next;
    }
};