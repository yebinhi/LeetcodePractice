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
        if(!head) return NULL;
        
        ListNode* dummy= new ListNode(0);
        dummy->next=head;
        ListNode* cur=head, *prev=dummy;
        while(cur && cur->next){
            ListNode* node = cur->next, *r=cur->next->next;
            prev->next=node;
            node->next=cur;
            cur->next=r;
            prev=cur;
            cur=r;
        }
        return dummy->next;
    }
};