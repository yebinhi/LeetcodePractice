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
        
        ListNode* dummy=new ListNode(0), *prev=dummy; *cur=head;
        dummy->next=head;
        
        while(cur && cur->next;){
            ListNode* tmp = cur->next, *rese=temp->next;
            prev->next=tmp;
            tmp->next=cur;
            cur->next=rese;
            
            prev=cur;
            cur=rese;
        }
        return dummy->next;
    }
};